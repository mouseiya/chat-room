QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    chatlist.cpp \
    chatview.cpp \
    client.cpp \
    loginview.cpp \
    main.cpp \
    dialog.cpp \
    sql.cpp

HEADERS += \
    chatlist.h \
    chatview.h \
    client.h \
    dialog.h \
    loginview.h \
    sql.h

FORMS += \
    chatlist.ui \
    chatview.ui \
    dialog.ui \
    loginview.ui

TRANSLATIONS += \
    ChatRoom_zh_CN.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
