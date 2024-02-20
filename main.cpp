#include <QCoreApplication>
#include <QtNetwork>
#include <QtSql>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QHostAddress class1;
    QSqlDatabase class2;

    return a.exec();
}
