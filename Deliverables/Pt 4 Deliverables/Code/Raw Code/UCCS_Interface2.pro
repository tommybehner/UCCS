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
    attendeemenu.cpp \
    AssetsDB.cpp \
    AssetsManager.cpp \
    Attendee.cpp \
    Business.cpp \
    Conference.cpp \
    Equipment.cpp \
    Room.cpp \
    DBConnector.cpp \
    Session.cpp

HEADERS  += login.h \
    createattendee.h \
    createbusiness.h \
    businessmenu.h \
    attendeemenu.h \
    AssetsDB.h \
    AssetsManager.h \
    Attendee.h \
    Business.h \
    Conference.h \
    Equipment.h \
    Room.h \
    session.h \
    sqlite3.h \
    DBConnector.h

FORMS    += login.ui \
    createattendee.ui \
    createbusiness.ui \
    businessmenu.ui \
    attendeemenu.ui
