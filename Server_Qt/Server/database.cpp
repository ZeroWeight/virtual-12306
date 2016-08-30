#include "database.h"
#include <QSqlQuery>
#include <QBitArray>
DataBase::DataBase()
{
    qDebug()<<"DataBase is started";
    //m_database = QSqlDatabase::addDatabase("QSQLITE");
    //m_database.setDatabaseName("SelectCourse.db");
    m_database.open();
}
