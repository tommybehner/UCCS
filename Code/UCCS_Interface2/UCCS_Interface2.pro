#-------------------------------------------------
#
# Project created by QtCreator 2017-04-28T00:05:40
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = UCCS_Interface2
TEMPLATE = app


SOURCES += main.cpp\
        login.cpp \
    createattendee.cpp \
    createbusiness.cpp \
    businessmenu.cpp \
    attendeemenu.cpp

HEADERS  += login.h \
    createattendee.h \
    createbusiness.h \
    businessmenu.h \
    attendeemenu.h

FORMS    += login.ui \
    createattendee.ui \
    createbusiness.ui \
    businessmenu.ui \
    attendeemenu.ui
