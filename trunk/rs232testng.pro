CONFIG += qt \
    debug
TEMPLATE = app
TARGET = rs232testng
QT += core \
    gui
HEADERS += ProviderManager.h \
    ProviderFactory.h \
    QCustTextEdit.h \
    outmod/HexToHtmlModifier.h \
    QHelpers.h \
    outmod/TextToHtmlModifier.h \
    outprov/HtmlDisplayStreamItem.h \
    outmod/OutputModifierFactory.h \
    inmod/InputProviderFactory.h \
    inprov/TextEditStreamItem.h \
    inprov/TextEnterInputProvider.h \
    outprov/HtmlDisplayOutputProvider.h \
    srcprov/SourceProviderFactory.h \
    srcprov/SerialSourceProvider.h \
    QConfigStorage.h \
    main.h \
    DataProvider.h \
    debug.h \
    StreamItem.h \
    DataChunk.h \
    GuiItemCmd.h \
    plugapi/stdtype.h \
    plugapi/vartype.h \
    QDynSelDock.h \
    rs232testng.h
SOURCES += ProviderManager.cpp \
    ProviderFactory.cpp \
    QCustTextEdit.cpp \
    outmod/HexToHtmlModifier.cpp \
    QHelpers.cpp \
    outmod/TextToHtmlModifier.cpp \
    outprov/HtmlDisplayStreamItem.cpp \
    outmod/OutputModifierFactory.cpp \
    inmod/InputProviderFactory.cpp \
    inprov/TextEditStreamItem.cpp \
    inprov/TextEnterInputProvider.cpp \
    outprov/HtmlDisplayOutputProvider.cpp \
    srcprov/SourceProviderFactory.cpp \
    srcprov/SerialSourceProvider.cpp \
    QConfigStorage.cpp \
    DataProvider.cpp \
    debug.cpp \
    StreamItem.cpp \
    DataChunk.cpp \
    GuiItemCmd.cpp \
    QDynSelDock.cpp \
    main.cpp \
    rs232testng.cpp
FORMS += ProviderManager.ui \
    srcprov/SerialSourceProvider.ui \
    inprov/TextEnterInputProvider.ui \
    outprov/HtmlDisplayOutputProvider.ui \
    rs232testng.ui
RESOURCES += resources.qrc
INCLUDEPATH += srcprov \
    plugapi \
    outprov \
    outmod \
    inprov \
    inmod
debug:CONFIG += console
