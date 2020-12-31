#include "mainwindow.h"
#include "connexion.h"
#include <QApplication>
#include <QDebug>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyle("fusion");
    connexion c;
    bool test=c.createConnexion();
    MainWindow w;

    if (test)
        qDebug() << "connexion successful";
    else
        qDebug() << "connexion failed";
    w.show();

    return a.exec();
}
