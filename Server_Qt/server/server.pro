QT += core
QT -= gui
QT += network
QT += sql
CONFIG += c++11

TARGET = server
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    basic.cpp

HEADERS += \
    station.hpp \
    basic.h
