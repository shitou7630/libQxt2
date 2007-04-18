/****************************************************************************
**
** Copyright (C) Qxt Foundation. Some rights reserved.
**
** This file is part of the QxtCore module of the Qt eXTension library
**
** This library is free software; you can redistribute it and/or
** modify it under the terms of the GNU Lesser General Public
** License as published by the Free Software Foundation; either
** version 2.1 of the License, or any later version.
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
** There is aditional information in the LICENSE file of libqxt.
** If you did not receive a copy of the file try to download it or
** contact the libqxt Management
** 
** <http://libqxt.sourceforge.net>  <aep@exys.org>  <coda@bobandgeorge.com>
**
****************************************************************************/


#include "QxtDesktopWidget.h"
#include <qt_windows.h>

WId QxtDesktopWidget::activeWindow() const
{
	// GetActiveWindow
	return 0;
}

WId QxtDesktopWidget::findWindow(const QString& title) const
{
	// FindWindow
	Q_UNUSED(title);
	return 0;
}

WId QxtDesktopWidget::windowAt(const QPoint& pos) const
{
	// WindowFromPoint
	Q_UNUSED(pos);
	return 0;
}

QRect QxtDesktopWidget::windowGeometry(WId window) const
{
	// GetWindowRect
	Q_UNUSED(window);
	return QRect();
}
