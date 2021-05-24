QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    UI/dialog.cpp \
    UI/mainwindow.cpp \
    src/Game/game.cpp \
    src/Map/map.cpp \
    src/Opponent/opponent.cpp \
    src/Player/player.cpp \
    src/main.cpp

HEADERS += \
    UI/dialog.h \
    UI/mainwindow.h \
    src/Game/game.h \
    src/Map/map.h \
    src/Opponent/opponent.h \
    src/Player/player.h


FORMS += \
    UI/dialog.ui \
    UI/mainwindow.ui \

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
