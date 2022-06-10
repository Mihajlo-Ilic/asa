#include "router.h"
#include <iostream>

Router* Router::_instance = nullptr;

Router *Router::getInstance()
{
    if (_instance == nullptr)
    {
        _instance = new Router();
    }
    return _instance;
}

QObject *Router::qmlInstance(QQmlEngine *engine, QJSEngine *scriptEngine)
{
    Q_UNUSED(engine);
    Q_UNUSED(scriptEngine);
    return _instance;
}

void Router::pushScreen(Screen *_screen)
{
    _stack.push(_screen);
    Q_EMIT screenPushed(_screen->getType(), _screen);
}

void Router::popScreen()
{
    if (!_stack.empty())
    {
        _stack.pop();
        Q_EMIT screenPoped();
    }
}

Router::Router(QObject *parent)
    : QObject{parent}
{
    _instance = this;
}
