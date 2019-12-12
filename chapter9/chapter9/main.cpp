#include "mainwindow.h"
#include <QApplication>
#include <QDebug>
#include <QThread>
#include <QMutex>
#include <QDateTime>
#include <stdio.h>
#include <stdlib.h>

void  myMessageOutput(QtMsgType type, const QMessageLogContext &context, const QString &msg)
{
	// ����
	static QMutex mutex;

	mutex.lock();

	QByteArray localMsg = msg.toLocal8Bit();

	QString strMsg("");
	switch (type)
	{
	case QtDebugMsg:
		strMsg = QString("Debug:");
		break;
	case QtWarningMsg:
		strMsg = QString("Warning:");
		break;
	case QtCriticalMsg:
		strMsg = QString("Critical:");
		break;
	case QtFatalMsg:
		strMsg = QString("Fatal:");
		break;
	}

	// ���������Ϣ��ʽ
	QString strDateTime = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ddd");
	QString strMessage = QString("Message:%1 File:%2  Line:%3  Function:%4  DateTime:%5")
		.arg(localMsg.constData()).arg(context.file).arg(context.line).arg(context.function).arg(strDateTime);

	// �����Ϣ���ļ��У���д��׷����ʽ��
	QFile file("log.txt");
	file.open(QIODevice::ReadWrite | QIODevice::Append);
	QTextStream stream(&file);
	stream << strMessage << "\r\n";
	file.flush();
	file.close();

	// ����
	mutex.unlock();
}
// �Զ�����Ϣ�������


int main(int argc, char *argv[])
{
	qInstallMessageHandler(myMessageOutput);
    QApplication a(argc, argv);	
	qDebug( "debug");
    MainWindow w;
    w.show();

    return a.exec();
}

