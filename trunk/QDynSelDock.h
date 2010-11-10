/*
 * QDynSelDock.h
 *
 *  Created on: 09-11-2010
 *      Author: RAFi
 */

#ifndef QDYNSELDOCK_H_
#define QDYNSELDOCK_H_

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDockWidget>
#include <QtGui/QHeaderView>
#include <QtGui/QComboBox>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

class QDynSelDock: public QDockWidget
{
private:
	QComboBox     selCombo;
public:
	QDynSelDock();
	virtual ~QDynSelDock();
};

#endif /* QDYNSELDOCK_H_ */
