#include "lightsmenu.h"

LightsMenu::LightsMenu(QObject *parent)
    : ListScreen(parent)
{
   _title = "Lights Menu";
   _subtitle = "izaberi svetlo";
   _model = new LightsMenuModel();
   _hasBack = true;
}

LightsMenuModel::LightsMenuModel()
{
    beginResetModel();
    auto item1 = new ListDelegate();
    item1->setTitle("neko svetlo");

    auto item2 = new ListDelegate();
    item2->setTitle("boja svetlo");

    _items.push_back(item1);
    _items.push_back(item2);

    endResetModel();
}

int LightsMenuModel::rowCount(const QModelIndex &parent) const
{
    return _items.size();
}

QVariant LightsMenuModel::data(const QModelIndex &index, int role) const
{
    if (index.isValid() && index.row() >= 0 && index.row() < _items.size())
    {
        if (role == Title)
            return _items[index.row()]->title();
    }

    return QVariant();
}

QHash<int, QByteArray> LightsMenuModel::roleNames() const
{
    QHash<int, QByteArray> names;
    names[Title] = "title";
    return names;
}
