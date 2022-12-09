include(gtest_dependency.pri)

TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG += thread
CONFIG -= qt

HEADERS += \
        ../dialog.h
SOURCES += \
        main.cpp         tst_test.cpp \
        ../dialog.cpp
