#ifndef MAINMENU_H
#define MAINMENU_H

#include <QObject>
#include <vector>

#include "listview.h"
#include "listmodel.h"

class MainMenu : public ListScreen
{
    Q_OBJECT
public:
    explicit MainMenu(QObject *parent = nullptr);
};

class MainMenuModel : public ListModel
{
public:
    MainMenuModel();
    int rowCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;
    QHash<int, QByteArray> roleNames() const;

    enum roleNames
    {
        Title = Qt::UserRole
    };
};

#endif // MAINMENU_H
