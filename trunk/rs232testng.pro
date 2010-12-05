TEMPLATE = app
TARGET = rs232testng
QT += core \
    gui
HEADERS += outmod/HexToHtmlModifier.h \
    QHelpers.h \
    outmod/TextToHtmlModifier.h \
    outprov/HtmlDisplayStreamItem.h \
    outmod/OutputModifierFactory.h \
    outmod/OutputModifierManager.h \
    inmod/InputProviderFactory.h \
    inmod/InputModifierManager.h \
    inprov/TextEditStreamItem.h \
    inprov/TextEnterInputProvider.h \
    outprov/HtmlDisplayOutputProvider.h \
    srcprov/SourceProviderManager.h \
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
SOURCES += outmod/HexToHtmlModifier.cpp \
    QHelpers.cpp \
    outmod/TextToHtmlModifier.cpp \
    outprov/HtmlDisplayStreamItem.cpp \
    outmod/OutputModifierFactory.cpp \
    outmod/OutputModifierManager.cpp \
    inmod/InputProviderFactory.cpp \
    inmod/InputModifierManager.cpp \
    inprov/TextEditStreamItem.cpp \
    inprov/TextEnterInputProvider.cpp \
    outprov/HtmlDisplayOutputProvider.cpp \
    srcprov/SourceProviderManager.cpp \
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
FORMS += inmod/InputModifierManager.ui \
    srcprov/SerialSourceProvider.ui \
    outmod/OutputModifierManager.ui \
    inprov/TextEnterInputProvider.ui \
    srcprov/SourceProviderManager.ui \
    outprov/HtmlDisplayOutputProvider.ui \
    rs232testng.ui
RESOURCES += resources.qrc
INCLUDEPATH += srcprov \
    plugapi \
    outprov \
    outmod \
    inprov \
    inmod
