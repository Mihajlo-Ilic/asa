#ifndef ListScreen_H
#define ListScreen_H

#include <QObject>
#include <QAbstractListModel>

#include "screen.h"

class ListScreen : public Screen
{
    Q_OBJECT
    Q_PROPERTY(QAbstractListModel* listModel READ listModel NOTIFY listModelChanged)
    QML_ELEMENT
public:
    explicit ListScreen(QObject *parent = nullptr);

    QAbstractListModel* listModel() const;
    Q_INVOKABLE virtual void clicked(int index);

signals:
    void listModelChanged();

protected:
    QAbstractListModel* _model;
};

#endif // ListScreen_H
