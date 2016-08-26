#include "basic.h"
using namespace Basic;

//class Person
Person::Person(){}
Person::Person(const Person&other){
    m_id_sha=other.m_id_sha;
    m_name=other.m_name;
    m_type=other.m_type;
    m_tel=other.m_tel;
    m_gender=other.m_gender;
    m_univ=other.m_univ;
    m_grade=other.m_grade;
    m_student_code=other.m_student_code;
    m_intv1=other.m_intv1;
    m_intv2=other.m_intv2;
}
Person::~Person(){}

const Person& Person::operator=(const Person& other){
    m_id_sha=other.m_id_sha;
    m_name=other.m_name;
    m_type=other.m_type;
    m_tel=other.m_tel;
    m_gender=other.m_gender;
    m_univ=other.m_univ;
    m_grade=other.m_grade;
    m_student_code=other.m_student_code;
    m_intv1=other.m_intv1;
    m_intv2=other.m_intv2;
    return other;
}

const bool Person::operator==(const Person& other)const{
    return m_id_sha==other.m_id_sha&&
            m_name==other.m_name&&
            m_type==other.m_type&&
            m_tel==other.m_tel&&
            m_gender==other.m_gender&&
            m_univ==other.m_univ&&
            m_grade==other.m_grade&&
            m_student_code==other.m_student_code&&
            m_intv1==other.m_intv1&&
            m_intv2==other.m_intv2;
}


//properties
//set
inline void Person::id_sha(const QString& s){
    m_id_sha=s;
}
inline void Person::name(const QString& s){
    m_name=s;
}
inline void Person::type(const TYPE& t){
    m_type=t;
}
inline void Person::tel(const QString& s){
    m_tel=s;
}
inline void Person::gender(const Gender& g){
    m_gender=g;
}
inline void Person::univ(const QString& s){
    m_univ=s;
}
inline void Person::grade(const int& s){
    m_grade=s;
}
inline void Person::student_code(const QString& s){
    m_student_code=s;
}
inline void Person::intv1(const Station &s){
    m_intv1=s;
}
inline void Person::intv2(const Station &s){
    m_intv2=s;
}
//get
inline const QString& Person::id_sha()const{
    return m_id_sha;
}
inline const QString& Person::name()const{
    return m_name;
}
inline const TYPE& Person::type()const{
    return m_type;
}
inline const QString& Person::tel()const{
    return m_tel;
}
inline const Gender& Person::gender()const{
    return m_gender;
}
inline const QString& Person::univ()const{
    return m_univ;
}
inline const int& Person::grade()const{
    return m_grade;
}
inline const QString& Person::student_code()const{
    return m_student_code;
}
inline const Station & Person::intv1()const{
    return m_intv1;
}
inline const Station & Person::intv2()const{
    return m_intv2;
}




//class User
//constructor
User::User(){
    m_contact.clear();
    m_contact_NUM=0;
}
User::User(const User&other){
    m_user_name=other.m_user_name;
    m_password=other.m_password;
    m_auth=other.m_auth;
    m_account=other.m_account;
    m_contact_NUM=other.m_contact_NUM;
    foreach(Person* p,other.m_contact){
        Person*q=new Person(*p);
        m_contact<<q;
    }
}
const User& User::operator=(const User& other){
    m_user_name=other.m_user_name;
    m_password=other.m_password;
    m_auth=other.m_auth;
    m_account=other.m_account;
    m_contact_NUM=other.m_contact_NUM;
    foreach(Person* p,other.m_contact){
        Person*q=new Person(*p);
        m_contact<<q;
    }
    return other;
}
const bool User::operator==(const User& other)const{
    return m_user_name==other.m_user_name;
}
//properties
//get
inline const QString& User::user_name()const{
    return m_user_name;
}
inline const QString& User::password()const{
    return m_password;
}
inline const AUTHORITY& User::auth()const{
    return m_auth;
}
inline const int& User::account()const{
    return m_account;
}
inline const int& User::contact_NUM()const{
    return m_contact_NUM;
}
inline const Person& User::contact(rank i)const{
    return *(m_contact.at(i));
}
//set
inline void User::user_name(const QString&s){
    m_user_name=s;
}
inline void User::password(const QString&s){
    m_password=s;
}
inline void User::auth(const AUTHORITY&a){
    m_auth=a;
}
inline void User::account(const int&i){
    if (i<0) m_account=0;
    else m_account=i;
}
inline User& User::operator<<(const Person&p){
    m_contact_NUM++;
    Person* q=new Person(p);
    m_contact<<q;
}
//dectructor
User::~User(){
    foreach(Person* p, m_contact){
        delete p;
        p=nullptr;
    }
}


