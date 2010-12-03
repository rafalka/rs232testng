#############################################################################
# Makefile for building: rs232testng
# Generated by qmake (2.01a) (Qt 4.7.0) on: Pt 3. gru 23:28:51 2010
# Project:  rs232testng.pro
# Template: app
# Command: d:\Devel\Qt\2010.05\qt\bin\qmake -o Makefile rs232testng.pro
#############################################################################

first: debug
install: debug-install
uninstall: debug-uninstall
MAKEFILE      = Makefile
QMAKE         = d:\Devel\Qt\2010.05\qt\bin\qmake
DEL_FILE      = del
CHK_DIR_EXISTS= if not exist
MKDIR         = mkdir
COPY          = copy /y
COPY_FILE     = $(COPY)
COPY_DIR      = xcopy /s /q /y /i
INSTALL_FILE  = $(COPY_FILE)
INSTALL_PROGRAM = $(COPY_FILE)
INSTALL_DIR   = $(COPY_DIR)
DEL_FILE      = del
SYMLINK       = 
DEL_DIR       = rmdir
MOVE          = move
CHK_DIR_EXISTS= if not exist
MKDIR         = mkdir
SUBTARGETS    =  \
		debug \
		release

debug: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug
debug-make_default: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug 
debug-make_first: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug first
debug-all: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug all
debug-clean: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug clean
debug-distclean: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug distclean
debug-install: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug install
debug-uninstall: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug uninstall
release: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release
release-make_default: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release 
release-make_first: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release first
release-all: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release all
release-clean: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release clean
release-distclean: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release distclean
release-install: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release install
release-uninstall: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release uninstall

Makefile: rs232testng.pro  ../../../../devel/Qt/2010.05/qt/mkspecs/win32-g++/qmake.conf ../../../../devel/Qt/2010.05/qt/mkspecs/qconfig.pri \
		../../../../devel/Qt/2010.05/qt/mkspecs/modules/qt_webkit_version.pri \
		../../../../devel/Qt/2010.05/qt/mkspecs/features/qt_functions.prf \
		../../../../devel/Qt/2010.05/qt/mkspecs/features/qt_config.prf \
		../../../../devel/Qt/2010.05/qt/mkspecs/features/exclusive_builds.prf \
		../../../../devel/Qt/2010.05/qt/mkspecs/features/default_pre.prf \
		../../../../devel/Qt/2010.05/qt/mkspecs/features/win32/default_pre.prf \
		../../../../devel/Qt/2010.05/qt/mkspecs/features/debug.prf \
		../../../../devel/Qt/2010.05/qt/mkspecs/features/debug_and_release.prf \
		../../../../devel/Qt/2010.05/qt/mkspecs/features/default_post.prf \
		../../../../devel/Qt/2010.05/qt/mkspecs/features/win32/default_post.prf \
		../../../../devel/Qt/2010.05/qt/mkspecs/features/win32/rtti.prf \
		../../../../devel/Qt/2010.05/qt/mkspecs/features/win32/exceptions.prf \
		../../../../devel/Qt/2010.05/qt/mkspecs/features/win32/stl.prf \
		../../../../devel/Qt/2010.05/qt/mkspecs/features/shared.prf \
		../../../../devel/Qt/2010.05/qt/mkspecs/features/warn_on.prf \
		../../../../devel/Qt/2010.05/qt/mkspecs/features/qt.prf \
		../../../../devel/Qt/2010.05/qt/mkspecs/features/win32/thread.prf \
		../../../../devel/Qt/2010.05/qt/mkspecs/features/moc.prf \
		../../../../devel/Qt/2010.05/qt/mkspecs/features/win32/windows.prf \
		../../../../devel/Qt/2010.05/qt/mkspecs/features/resources.prf \
		../../../../devel/Qt/2010.05/qt/mkspecs/features/uic.prf \
		../../../../devel/Qt/2010.05/qt/mkspecs/features/yacc.prf \
		../../../../devel/Qt/2010.05/qt/mkspecs/features/lex.prf \
		../../../../devel/Qt/2010.05/qt/mkspecs/features/include_source_dir.prf \
		d:/devel/Qt/2010.05/qt/lib/qtmaind.prl
	$(QMAKE) -o Makefile rs232testng.pro
..\..\..\..\devel\Qt\2010.05\qt\mkspecs\qconfig.pri:
..\..\..\..\devel\Qt\2010.05\qt\mkspecs\modules\qt_webkit_version.pri:
..\..\..\..\devel\Qt\2010.05\qt\mkspecs\features\qt_functions.prf:
..\..\..\..\devel\Qt\2010.05\qt\mkspecs\features\qt_config.prf:
..\..\..\..\devel\Qt\2010.05\qt\mkspecs\features\exclusive_builds.prf:
..\..\..\..\devel\Qt\2010.05\qt\mkspecs\features\default_pre.prf:
..\..\..\..\devel\Qt\2010.05\qt\mkspecs\features\win32\default_pre.prf:
..\..\..\..\devel\Qt\2010.05\qt\mkspecs\features\debug.prf:
..\..\..\..\devel\Qt\2010.05\qt\mkspecs\features\debug_and_release.prf:
..\..\..\..\devel\Qt\2010.05\qt\mkspecs\features\default_post.prf:
..\..\..\..\devel\Qt\2010.05\qt\mkspecs\features\win32\default_post.prf:
..\..\..\..\devel\Qt\2010.05\qt\mkspecs\features\win32\rtti.prf:
..\..\..\..\devel\Qt\2010.05\qt\mkspecs\features\win32\exceptions.prf:
..\..\..\..\devel\Qt\2010.05\qt\mkspecs\features\win32\stl.prf:
..\..\..\..\devel\Qt\2010.05\qt\mkspecs\features\shared.prf:
..\..\..\..\devel\Qt\2010.05\qt\mkspecs\features\warn_on.prf:
..\..\..\..\devel\Qt\2010.05\qt\mkspecs\features\qt.prf:
..\..\..\..\devel\Qt\2010.05\qt\mkspecs\features\win32\thread.prf:
..\..\..\..\devel\Qt\2010.05\qt\mkspecs\features\moc.prf:
..\..\..\..\devel\Qt\2010.05\qt\mkspecs\features\win32\windows.prf:
..\..\..\..\devel\Qt\2010.05\qt\mkspecs\features\resources.prf:
..\..\..\..\devel\Qt\2010.05\qt\mkspecs\features\uic.prf:
..\..\..\..\devel\Qt\2010.05\qt\mkspecs\features\yacc.prf:
..\..\..\..\devel\Qt\2010.05\qt\mkspecs\features\lex.prf:
..\..\..\..\devel\Qt\2010.05\qt\mkspecs\features\include_source_dir.prf:
d:\devel\Qt\2010.05\qt\lib\qtmaind.prl:
qmake: qmake_all FORCE
	@$(QMAKE) -o Makefile rs232testng.pro

qmake_all: FORCE

make_default: debug-make_default release-make_default FORCE
make_first: debug-make_first release-make_first FORCE
all: debug-all release-all FORCE
clean: debug-clean release-clean FORCE
distclean: debug-distclean release-distclean FORCE
	-$(DEL_FILE) Makefile

check: first

debug-mocclean: $(MAKEFILE).Debug
	$(MAKE) -f $(MAKEFILE).Debug mocclean
release-mocclean: $(MAKEFILE).Release
	$(MAKE) -f $(MAKEFILE).Release mocclean
mocclean: debug-mocclean release-mocclean

debug-mocables: $(MAKEFILE).Debug
	$(MAKE) -f $(MAKEFILE).Debug mocables
release-mocables: $(MAKEFILE).Release
	$(MAKE) -f $(MAKEFILE).Release mocables
mocables: debug-mocables release-mocables
FORCE:

$(MAKEFILE).Debug: Makefile
$(MAKEFILE).Release: Makefile
