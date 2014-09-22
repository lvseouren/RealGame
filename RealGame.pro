#-------------------------------------------------
#
# Project created by QtCreator 2014-09-22T15:07:43
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = RealGame
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp \
    RGTask.cpp \
    RGTaskList.cpp \
    RGTasksOfADay.cpp \
    RGTaskDataSource.cpp

HEADERS  += MainWindow.h \
    RGTask.h \
    RGDefine.h \
    RGTaskList.h \
    RGTasksOfADay.h \
    RGTaskDataSource.h

FORMS    += MainWindow.ui
