MODULE=QXT_GUI
include (../../config.pri)

VERSION = $$QXVERSION
TEMPLATE = lib
TARGET = QxtGui
DEPENDPATH += .
INCLUDEPATH += . ../core ../../deploy/include
DEFINES += BUILD_QXT_GUI
LIBS+=-L../../deploy/libs/ -lQxtKit -lQxtCore



QT = core gui

QxtLabel.headers		= QxtLabel.h
QxtLabel.interfaces		= QxtLabel
QxtLabel.sources		= QxtLabel.cpp
QxtLabel.stability		=

QxtPushButton.headers		= QxtPushButton.h
QxtPushButton.interfaces	= QxtPushButton
QxtPushButton.sources		= QxtPushButton.cpp
QxtPushButton.stability		=

QxtItemDelegate.headers		= QxtItemDelegate.h
QxtItemDelegate.interfaces	= QxtItemDelegate
QxtItemDelegate.sources		= QxtItemDelegate.cpp
QxtItemDelegate.stability	=

QxtTreeWidget.headers		= QxtTreeWidget.h private/QxtTreeWidget_p.h
QxtTreeWidget.interfaces	= QxtTreeWidget
QxtTreeWidget.sources		= QxtTreeWidget.cpp
QxtTreeWidget.stability	=

QxtTreeWidgetItem.headers	= QxtTreeWidgetItem.h
QxtTreeWidgetItem.interfaces	= QxtTreeWidgetItem
QxtTreeWidgetItem.sources	= QxtTreeWidgetItem.cpp
QxtTreeWidgetItem.stability	=

QxtTabWidget.headers		= QxtTabWidget.h
QxtTabWidget.interfaces		= QxtTabWidget
QxtTabWidget.sources		= QxtTabWidget.cpp
QxtTabWidget.stability		=

Parts=QxtLabel QxtPushButton QxtItemDelegate QxtTreeWidget QxtTreeWidgetItem QxtTabWidget
include (../../features/bottom.prf)
