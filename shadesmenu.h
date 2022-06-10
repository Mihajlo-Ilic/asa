#ifndef SHADESMENU_H
#define SHADESMENU_H

#include <QObject>
#include "listmodel.h"
#include "listview.h"

class ShadesMenu : public ListScreen
{
    Q_OBJECT
public:
    ShadesMenu(QObject *parent = nullptr);
};

class ShadesMenuModel : public ListModel
{
public:
    ShadesMenuModel();
    int rowCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;
    QHash<int, QByteArray> roleNames() const;

    enum roleNames
    {
        Title = Qt::UserRole
    };
};

#endif // SHADESMENU_H
