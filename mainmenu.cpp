#include "mainmenu.h"
#include "mainmenudelegate.h"

MainMenu::MainMenu(QObject *parent)
    : ListScreen{parent}
{
    _title = "Main Menu";
    _subtitle = "nalazite se u sobi ta i ta";
    _model = new MainMenuModel();
    _hasBack = false;
}

MainMenuModel::MainMenuModel()
{
    beginResetModel();

    auto _item1 = new MainMenuDelegate();
    _item1->setExperience("lights");
    _item1->setTitle("light menu");
    _items.push_back(_item1);

    auto _item2 = new MainMenuDelegate();
    _item2->setExperience("shades");
    _item2->setTitle("shades menu");
    _items.push_back(_item2);

    endResetModel();
}

int MainMenuModel::rowCount(const QModelIndex &parent) const
{
    return _items.size();
}

QVariant MainMenuModel::data(const QModelIndex &index, int role) const
{
    if (index.isValid() && index.row() >= 0 && index.row() < _items.size())
    {
        if (role == Title)
            return _items[index.row()]->title();
    }

    return QVariant();
}

QHash<int, QByteArray> MainMenuModel::roleNames() const
{
    QHash<int, QByteArray> names;
    names[Title] = "title";
    return names;
}
