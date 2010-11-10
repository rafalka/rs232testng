TEMPLATE = app
TARGET = rs232testng
QT += core \
    gui
HEADERS += plugapi/stdtype.h \
    plugapi/vartype.h \
    QDynSelDock.h \
    rs232testng.h
SOURCES += QDynSelDock.cpp \
    main.cpp \
    rs232testng.cpp
FORMS += rs232testng.ui
RESOURCES += resources.qrc
