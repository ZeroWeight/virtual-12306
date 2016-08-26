/*********************************************************
 * C++ Programming Task
 * Project: A virtual 12306
 * Weight Zero zwt15@mails.tsinghua.edu.cn
 * Department of Automation, Tsinghua University
 * est. time 2016-8-26
 * "basic.h"
 * namespace Basic
 * This file define the basic class,enum.s,and const values
 **********************************************************/
#ifndef BASIC_H
#define BASIC_H
//File include
#include <QCoreApplication>
#include <QList>
#include <QObject>
#include <QDebug>
#include <QDateTime>
#include <QQueue>
#include <QString>
#include <cstdlib>
#include "station.hpp"
namespace Basic{
typedef int rank;
//constants
const int LONG_BUFFERSIZE=256;
const int BUFFERSIZE=64;
const int SHORT_BUFFERSIZE=4;
//enums
enum AUTHORITY{
    SU=0,
    USR
};
enum TYPE{
    ADULT=0,
    STUDENT,
    CHILD
};
enum Gender{
    UNKNOWN,
    MALE,
    FEMALE
};

//class
/*********************************************************
 * class Basic::Person
 * design a safe class of person
 **********************************************************/
class Person{
public:
    //constructor
    Person();
    Person(const Person&other);
    const Person& operator=(const Person& other);
    const bool operator==(const Person& other)const;
    //properties
    //set
    inline void id_sha(const QString& s);
    inline void name(const QString& s);
    inline void type(const TYPE& t);
    inline void tel(const QString& s);
    inline void gender(const Gender& g);
    inline void univ(const QString& s);
    inline void grade(const int& s);
    inline void student_code(const QString& s);
    inline void intv1(const Station &s);
    inline void intv2(const Station &s);
    //get
    inline const QString& id_sha()const;
    inline const QString& name()const;
    inline const TYPE& type()const;
    inline const QString& tel()const;
    inline const Gender& gender()const;
    inline const QString& univ()const;
    inline const int& grade()const;
    inline const QString& student_code()const;
    inline const Station & intv1()const;
    inline const Station & intv2()const;
    //destructor
    ~Person();
private:
    QString m_id_sha;
    QString m_name;
    TYPE m_type;
    QString m_tel;
    Gender m_gender;
    //info for a student
    QString m_univ;
    int m_grade;
    QString m_student_code;
    Station m_intv1;
    Station m_intv2;
};





/*********************************************************
 * class Basic::User
 * design a safe class of user
 *********************************************************/
class User{
public:
    //constructor
    User();
    User(const User&);
    const User& operator=(const User& other);
    const bool operator==(const User& other)const;
    //properties
    //get
    inline const QString& user_name()const;
    inline const QString& password()const;
    inline const AUTHORITY& auth()const;
    inline const int& account()const;
    inline const int& contact_NUM()const;
    inline const Person& contact(rank i)const;
    //set
    inline void user_name(const QString&);
    inline void password(const QString&);
    inline void auth(const AUTHORITY&);
    inline void account(const int&);
    inline User& operator<<(const Person&);
    //dectructor
    ~User();
private:
    QString m_user_name;
    QString m_password;
    AUTHORITY m_auth;
    int m_account;
    int m_contact_NUM;
    QList<Person*> m_contact;
};





/*********************************************************
 * class Basic::User
 * design a safe class of user
 *********************************************************/
class Buyer:public User,public Person{};





}


#endif // BASIC_H
