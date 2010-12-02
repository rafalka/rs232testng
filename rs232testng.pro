TEMPLATE = app
TARGET = rs232testng
QT += core \
    gui
HEADERS += QConfigStorage.h \
    main.h \
    DataProvider.h \
    QHtmlDisplayStreamItem.h \
    QTextEditStreamItem.h \
    debug.h \
    StreamItem.h \
    DataChunk.h \
    GuiItemCmd.h \
    SerialSourceProvider.h \
    OutputProvider.h \
    QSourceManager.h \
    SourceProviderFactory.h \
    OutputProviderFactory.h \
    InputProviderFactory.h \
    InputProvider.h \
    SourceProvider.h \
    plugapi/stdtype.h \
    plugapi/vartype.h \
    QDynSelDock.h \
    rs232testng.h
SOURCES += QConfigStorage.cpp \
    DataProvider.cpp \
    debug.cpp \
    QHtmlDisplayStreamItem.cpp \
    QTextEditStreamItem.cpp \
    StreamItem.cpp \
    DataChunk.cpp \
    GuiItemCmd.cpp \
    SerialSourceProvider.cpp \
    OutputProvider.cpp \
    QSourceManager.cpp \
    SourceProviderFactory.cpp \
    OutputProviderFactory.cpp \
    InputProviderFactory.cpp \
    InputProvider.cpp \
    SourceProvider.cpp \
    QDynSelDock.cpp \
    main.cpp \
    rs232testng.cpp
FORMS += rs232testng.ui
RESOURCES += resources.qrc
