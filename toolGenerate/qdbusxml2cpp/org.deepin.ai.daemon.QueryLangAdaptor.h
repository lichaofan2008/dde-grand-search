/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-grand-search/3rdparty/interfaces/org.deepin.ai.daemon.QueryLang.xml -a ./dde-grand-search/toolGenerate/qdbusxml2cpp/org.deepin.ai.daemon.QueryLangAdaptor -i ./dde-grand-search/toolGenerate/qdbusxml2cpp/org.deepin.ai.daemon.QueryLang.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef ORG_DEEPIN_AI_DAEMON_QUERYLANGADAPTOR_H
#define ORG_DEEPIN_AI_DAEMON_QUERYLANGADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "./dde-grand-search/toolGenerate/qdbusxml2cpp/org.deepin.ai.daemon.QueryLang.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface org.deepin.ai.daemon.QueryLang
 */
class QueryLangAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.deepin.ai.daemon.QueryLang")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.deepin.ai.daemon.QueryLang\">\n"
"    <method name=\"Query\">\n"
"      <arg direction=\"out\" type=\"s\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"content\"/>\n"
"    </method>\n"
"    <method name=\"Enable\">\n"
"      <arg direction=\"out\" type=\"b\"/>\n"
"    </method>\n"
"  </interface>\n"
        "")
public:
    QueryLangAdaptor(QObject *parent);
    virtual ~QueryLangAdaptor();

public: // PROPERTIES
public Q_SLOTS: // METHODS
    bool Enable();
    QString Query(const QString &content);
Q_SIGNALS: // SIGNALS
};

#endif
