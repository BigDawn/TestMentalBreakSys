#############################################################################
# Makefile for building: TestMentalBreakSys
# Generated by qmake (2.01a) (Qt 4.8.2) on: Tue Aug 15 15:49:59 2017
# Project:  TestMentalBreakSys.pro
# Template: app
# Command: /opt/qt-everywhere-opensource-src-4.8.2/bin/qmake -spec /opt/qt-everywhere-opensource-src-4.8.2/mkspecs/linux-g++-64 CONFIG+=debug -o Makefile TestMentalBreakSys.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_DEPRECATED_WARNINGS -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -m64 -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -m64 -pipe -std=c++11 -g -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/linux-g++-64 -I. -I/usr/local/Trolltech/Qt-4.8.2/include/QtCore -I/usr/local/Trolltech/Qt-4.8.2/include -I.
LINK          = g++
LFLAGS        = -m64 -Wl,-rpath,/usr/local/Trolltech/Qt-4.8.2/lib
LIBS          = $(SUBLIBS)  -L/usr/local/Trolltech/Qt-4.8.2/lib -lQtCore -L/usr/local/Trolltech/Qt-4.8.2/lib -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /opt/qt-everywhere-opensource-src-4.8.2/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = main.cpp \
		mentalsystem.cpp \
		characterobject.cpp 
OBJECTS       = main.o \
		mentalsystem.o \
		characterobject.o
DIST          = /opt/qt-everywhere-opensource-src-4.8.2/mkspecs/common/unix.conf \
		/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/common/linux.conf \
		/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/common/gcc-base.conf \
		/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/common/gcc-base-unix.conf \
		/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/common/g++-base.conf \
		/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/common/g++-unix.conf \
		/usr/local/Trolltech/Qt-4.8.2/mkspecs/qconfig.pri \
		/usr/local/Trolltech/Qt-4.8.2/mkspecs/modules/qt_webkit_version.pri \
		/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/features/qt_functions.prf \
		/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/features/qt_config.prf \
		/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/features/exclusive_builds.prf \
		/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/features/default_pre.prf \
		/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/features/debug.prf \
		/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/features/default_post.prf \
		/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/features/unix/gdb_dwarf_index.prf \
		/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/features/warn_on.prf \
		/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/features/qt.prf \
		/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/features/unix/thread.prf \
		/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/features/moc.prf \
		/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/features/resources.prf \
		/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/features/uic.prf \
		/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/features/yacc.prf \
		/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/features/lex.prf \
		/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/features/include_source_dir.prf \
		TestMentalBreakSys.pro
QMAKE_TARGET  = TestMentalBreakSys
DESTDIR       = 
TARGET        = TestMentalBreakSys

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET):  $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)
	{ test -n "$(DESTDIR)" && DESTDIR="$(DESTDIR)" || DESTDIR=.; } && test $$(gdb --version | sed -e 's,[^0-9]\+\([0-9]\)\.\([0-9]\).*,\1\2,;q') -gt 72 && gdb --nx --batch --quiet -ex 'set confirm off' -ex "save gdb-index $$DESTDIR" -ex quit '$(TARGET)' && test -f $(TARGET).gdb-index && objcopy --add-section '.gdb_index=$(TARGET).gdb-index' --set-section-flags '.gdb_index=readonly' '$(TARGET)' '$(TARGET)' && rm -f $(TARGET).gdb-index || true

Makefile: TestMentalBreakSys.pro  /opt/qt-everywhere-opensource-src-4.8.2/mkspecs/linux-g++-64/qmake.conf /opt/qt-everywhere-opensource-src-4.8.2/mkspecs/common/unix.conf \
		/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/common/linux.conf \
		/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/common/gcc-base.conf \
		/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/common/gcc-base-unix.conf \
		/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/common/g++-base.conf \
		/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/common/g++-unix.conf \
		/usr/local/Trolltech/Qt-4.8.2/mkspecs/qconfig.pri \
		/usr/local/Trolltech/Qt-4.8.2/mkspecs/modules/qt_webkit_version.pri \
		/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/features/qt_functions.prf \
		/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/features/qt_config.prf \
		/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/features/exclusive_builds.prf \
		/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/features/default_pre.prf \
		/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/features/debug.prf \
		/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/features/default_post.prf \
		/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/features/unix/gdb_dwarf_index.prf \
		/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/features/warn_on.prf \
		/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/features/qt.prf \
		/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/features/unix/thread.prf \
		/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/features/moc.prf \
		/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/features/resources.prf \
		/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/features/uic.prf \
		/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/features/yacc.prf \
		/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/features/lex.prf \
		/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/features/include_source_dir.prf \
		/usr/local/Trolltech/Qt-4.8.2/lib/libQtCore.prl
	$(QMAKE) -spec /opt/qt-everywhere-opensource-src-4.8.2/mkspecs/linux-g++-64 CONFIG+=debug -o Makefile TestMentalBreakSys.pro
/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/common/unix.conf:
/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/common/linux.conf:
/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/common/gcc-base.conf:
/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/common/gcc-base-unix.conf:
/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/common/g++-base.conf:
/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/common/g++-unix.conf:
/usr/local/Trolltech/Qt-4.8.2/mkspecs/qconfig.pri:
/usr/local/Trolltech/Qt-4.8.2/mkspecs/modules/qt_webkit_version.pri:
/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/features/qt_functions.prf:
/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/features/qt_config.prf:
/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/features/exclusive_builds.prf:
/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/features/default_pre.prf:
/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/features/debug.prf:
/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/features/default_post.prf:
/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/features/unix/gdb_dwarf_index.prf:
/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/features/warn_on.prf:
/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/features/qt.prf:
/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/features/unix/thread.prf:
/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/features/moc.prf:
/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/features/resources.prf:
/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/features/uic.prf:
/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/features/yacc.prf:
/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/features/lex.prf:
/opt/qt-everywhere-opensource-src-4.8.2/mkspecs/features/include_source_dir.prf:
/usr/local/Trolltech/Qt-4.8.2/lib/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -spec /opt/qt-everywhere-opensource-src-4.8.2/mkspecs/linux-g++-64 CONFIG+=debug -o Makefile TestMentalBreakSys.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/TestMentalBreakSys1.0.0 || $(MKDIR) .tmp/TestMentalBreakSys1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/TestMentalBreakSys1.0.0/ && $(COPY_FILE) --parents mentalsystem.h characterobject.h .tmp/TestMentalBreakSys1.0.0/ && $(COPY_FILE) --parents main.cpp mentalsystem.cpp characterobject.cpp .tmp/TestMentalBreakSys1.0.0/ && (cd `dirname .tmp/TestMentalBreakSys1.0.0` && $(TAR) TestMentalBreakSys1.0.0.tar TestMentalBreakSys1.0.0 && $(COMPRESS) TestMentalBreakSys1.0.0.tar) && $(MOVE) `dirname .tmp/TestMentalBreakSys1.0.0`/TestMentalBreakSys1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/TestMentalBreakSys1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all:
compiler_moc_header_clean:
compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: 

####### Compile

main.o: main.cpp characterobject.h \
		mentalsystem.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

mentalsystem.o: mentalsystem.cpp mentalsystem.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mentalsystem.o mentalsystem.cpp

characterobject.o: characterobject.cpp characterobject.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o characterobject.o characterobject.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:
