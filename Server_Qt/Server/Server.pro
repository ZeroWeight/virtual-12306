QT += core
QT -= gui
QT += sql
QT += network
CONFIG += c++11

TARGET = Server
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    analyze.cpp \
    database.cpp \
    client.cpp \
    server.cpp

HEADERS += \
    server.h \
    basic.h \
    message.hpp \
    client.h \
    analyzer.h \
    database.h
