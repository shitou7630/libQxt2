/****************************************************************************
**
** Copyright (C) Qxt Foundation. Some rights reserved.
**
** This file is part of the QxtCore module of the Qt eXTension library
**
** This library is free software; you can redistribute it and/or modify it
** under the terms of th Common Public License, version 1.0, as published by
** IBM.
**
** This file is provided "AS IS", without WARRANTIES OR CONDITIONS OF ANY
** KIND, EITHER EXPRESS OR IMPLIED INCLUDING, WITHOUT LIMITATION, ANY
** WARRANTIES OR CONDITIONS OF TITLE, NON-INFRINGEMENT, MERCHANTABILITY OR
** FITNESS FOR A PARTICULAR PURPOSE.
**
** You should have received a copy of the CPL along with this file.
** See the LICENSE file and the cpl1.0.txt file included with the source
** distribution for more information. If you did not receive a copy of the
** license, contact the Qxt Foundation.
**
** <http://libqxt.sourceforge.net>  <foundation@libqxt.org>
**
****************************************************************************/
#ifndef QxtDeplex_HEADER_GUARD
#define QxtDeplex_HEADER_GUARD
#include "qxtglobal.h"
#include "qxtpimpl.h"
#include "qxtpipe.h"

class QxtDeplexPrivate;
class QXT_CORE_EXPORT QxtDeplex : public QxtPipe
{
    Q_OBJECT
public:
    QxtDeplex(QObject * parent=0);
    QxtDeplex(QIODevice * device,QObject * parent=0);

    void setDevice(QIODevice * device);
    QIODevice *device() const;
protected:
    virtual qint64 writeData ( const char * data, qint64 maxSize );
    virtual void   receiveData (QByteArray data, const QxtPipe * sender );
private:
    QXT_DECLARE_PRIVATE(QxtDeplex);

};

#endif
