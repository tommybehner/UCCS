QT += qml quick sql
TARGET = calendar

!qtConfig(sql-sqlite): QTPLUGIN += qsqlite

include(src/src.pri)
include(../shared/shared.pri)

OTHER_FILES += qml/main.qml

RESOURCES += resources.qrc

target.path = $$[QT_INSTALL_EXAMPLES]/quickcontrols/controls/calendar
INSTALLS += target

DISTFILES += \
    eventindicator.png \
    main.qml

HEADERS += \
    sqleventmodel.h \
    schedule.h

SOURCES += \
    main.cpp \
    sqleventmodel.cpp \
    schedule.cpp