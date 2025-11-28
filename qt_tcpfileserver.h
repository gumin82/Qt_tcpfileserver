#ifndef QT_TCPFILESERVER_H
#define QT_TCPFILESERVER_H

#include <QDialog>
#include <QtNetwork>
#include <QtWidgets>

class Qt_tcpfileserver : public QDialog
{
    Q_OBJECT

public:
    Qt_tcpfileserver(QWidget *parent = nullptr);
    ~Qt_tcpfileserver();
public slots:
    void start();
    void acceptConnection();
    void updateServerProgress();
    void displayError(QAbstractSocket::SocketError socketError);
private:
    QProgressBar        *serverProgressBar;
    QLabel              *serverStatusLabel;
    QPushButton         *startButton;
    QPushButton         *quitButton;
    QDialogButtonBox    *buttonBox;
    QTcpServer           tcpServer;
    QTcpSocket          *tcpServerConnection;
    qint64              totalBytes;
    qint64               byteReceived;
    qint64               fileNameSize;
    QString               fileName;
    QFile                *localFile;
    QByteArray            inBlock;
};
#endif // QT_TCPFILESERVER_H
