#ifndef ROUTER_H
#define ROUTER_H

#include <QObject>
#include <QStack>
#include <QtQml/qqml.h>

#include "listview.h"

class Router : public QObject
{
    Q_OBJECT
public:
    Router(QObject *parent = nullptr);
    static Router* getInstance();
    static QObject *qmlInstance(QQmlEngine *engine, QJSEngine *scriptEngine);
    void pushScreen(Screen* _screen);
    void popScreen();

signals:
    void screenPushed(int type, Screen* screen);
    void screenPoped();

private:

    QStack<Screen*> _stack;
    static Router* _instance;
};

#endif // ROUTER_H
