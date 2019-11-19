#include "mainwindowarticles.h"
#include <QApplication>
#include <QMessageBox>
#include "connection.h"
#include <QDebug>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
 Connection c;

    MainWindowArticles w;
    w.show();
    try {
        c.createconnect();
        w.show();
    } catch (QString s) {
        qDebug()<<s;
    }
    bool test=c.createconnect();
    if(test)
    {w.show();
        QMessageBox::information(nullptr, QObject::tr("database is open"),
                    QObject::tr("connection successful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
    else
        QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                    QObject::tr("connection failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    return a.exec();
}