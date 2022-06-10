#ifndef LIGHTSMENU_H
#define LIGHTSMENU_H

#include <QObject>
#include "listmodel.h"
#include "listview.h"

class LightsMenu : public ListScreen
{
    Q_OBJECT
public:
    explicit LightsMenu(QObject *parent = nullptr);
};

class LightsMenuModel : public ListModel
{
public:
    LightsMenuModel();
    int rowCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;
    QHash<int, QByteArray> roleNames() const;

    enum roleNames
    {
        Title = Qt::UserRole
    };
};

#endif // LIGHTSMENU_H
