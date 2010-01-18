/**************************************************************************
**
** This file is part of Qt Creator
**
** Copyright (c) 2009 Nokia Corporation and/or its subsidiary(-ies).
**
** Contact: Nokia Corporation (qt-info@nokia.com)
**
** Commercial Usage
**
** Licensees holding valid Qt Commercial licenses may use this file in
** accordance with the Qt Commercial License Agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Nokia.
**
** GNU Lesser General Public License Usage
**
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** If you are unsure which license is appropriate for your use, please
** contact the sales department at http://qt.nokia.com/contact.
**
**************************************************************************/

#ifndef QTDECLARATIVEMETATYPEBACKEND_H
#define QTDECLARATIVEMETATYPEBACKEND_H

#include <qmljs/qmljsmetatypebackend.h>

#include <QtCore/QList>

namespace QmlJS {
namespace Internal {

class DeclarativeSymbol;
class DeclarativeObjectSymbol;
class DeclarativePropertySymbol;

class QtDeclarativeMetaTypeBackend: public MetaTypeBackend
{
    friend class DeclarativeSymbol;
    friend class DeclarativeObjectSymbol;
    friend class DeclarativePropertySymbol;

public:
    QtDeclarativeMetaTypeBackend(TypeSystem *typeSystem);
    ~QtDeclarativeMetaTypeBackend();

    virtual QList<Symbol *> availableTypes(const QString &package, int majorVersion, int minorVersion);
    virtual Symbol *resolve(const QString &typeName, const QList<PackageInfo> &packages);

protected:
//    QList<QmlSymbol *> members(const QmlJS::NodeMetaInfo &metaInfo);
//    QList<QmlSymbol *> inheritedMembers(const QmlJS::NodeMetaInfo &metaInfo);
//    QmlDeclarativeSymbol *typeOf(const QmlJS::PropertyMetaInfo &metaInfo);

private:
//    QmlDeclarativeSymbol *getSymbol(const QmlJS::NodeMetaInfo &metaInfo);

private:
//    QMap<QString, QmlDeclarativeSymbol*> m_symbols;
};

} // namespace Internal
} // namespace Qml

#endif // QTDECLARATIVEMETATYPEBACKEND_H
