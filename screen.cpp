#include "screen.h"
#include "router.h"

Screen::Screen(QObject *parent)
    : QObject{parent}, _type(View)
{

}

void Screen::setTitle(const QString& title)
{
    if (title != _subtitle)
    {
        _subtitle = title;
        Q_EMIT titleChanged();
    }
}

void Screen::setSubtitle(const QString& subtitle)
{
    if (subtitle != _subtitle)
    {
        _subtitle = subtitle;
        Q_EMIT subtitleChanged();
    }
}

QString Screen::title() const
{
    return _title;
}

QString Screen::subtitle() const
{
    return _subtitle;
}

bool Screen::hasBack() const
{
    return _hasBack;
}


ScreenType Screen::getType() const
{
    return _type;
}

void Screen::back()
{
    auto router = Router::getInstance();
    if (router != nullptr)
    {
        router->popScreen();
    }
}
