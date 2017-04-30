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
    event.h \
    sqleventmodel.h

SOURCES += \
    event.cpp \
    main.cpp \
    sqleventmodel.cpp