QT += core
QT -= gui
QT += network
CONFIG += c++11

TARGET = TcpIp-1
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp

HEADERS += \
    server.h \
    client.h \
    analyzer.h \
    message.h
