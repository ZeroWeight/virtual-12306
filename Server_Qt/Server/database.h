#ifndef DATABASE_H
#define DATABASE_H
#endif // DATABASE_H
#include "basic.h"
#include <QSqlDatabase>
class DataBase
{
private:
    QSqlDatabase m_database;
public:
    DataBase();
    ~DataBase(){}

public:
    bool DataBaseValid();
};
