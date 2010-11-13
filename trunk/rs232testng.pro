TEMPLATE = app
TARGET = rs232testng
QT += core \
    gui
HEADERS += QSourceManager.h \
    SourceProviderFactory.h \
    OutputProviderFactory.h \
    InputProviderFactory.h \
    OutpuProvider.h \
    InputProvider.h \
    SourceProvider.h \
    plugapi/stdtype.h \
    plugapi/vartype.h \
    QDynSelDock.h \
    rs232testng.h
SOURCES += QSourceManager.cpp \
    SourceProviderFactory.cpp \
    OutputProviderFactory.cpp \
    InputProviderFactory.cpp \
    OutpuProvider.cpp \
    InputProvider.cpp \
    SourceProvider.cpp \
    QDynSelDock.cpp \
    main.cpp \
    rs232testng.cpp
FORMS += rs232testng.ui
RESOURCES += resources.qrc
