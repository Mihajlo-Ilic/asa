#include "listdelegate.h"



ListDelegate::ListDelegate(QObject *parent) : _title("")
{
}

QString ListDelegate::title() const
{
    return _title;
}

void ListDelegate::setTitle(const QString &title)
{
    _title = title;
}

void ListDelegate::clicked()
{

}
