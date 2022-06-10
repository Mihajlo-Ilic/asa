#include "shadesmenu.h"

ShadesMenu::ShadesMenu(QObject *parent)
    : ListScreen(parent)
{
   _title = "Shades Menu";
   _subtitle = "izaberi svetlo";
   _model = new ShadesMenuModel();
}

ShadesMenuModel::ShadesMenuModel()
{
    beginResetModel();
    auto item1 = new ListDelegate();
    item1->setTitle("neka zavesa");

    auto item2 = new ListDelegate();
    item2->setTitle("zavesa 2");

    _items.push_back(item1);
    _items.push_back(item2);

    endResetModel();
}

int ShadesMenuModel::rowCount(const QModelIndex &parent) const
{
    return _items.size();
}

QVariant ShadesMenuModel::data(const QModelIndex &index, int role) const
{
    if (index.isValid() && index.row() >= 0 && index.row() < _items.size())
    {
        if (role == Title)
            return _items[index.row()]->title();
    }

    return QVariant();
}

QHash<int, QByteArray> ShadesMenuModel::roleNames() const
{
    QHash<int, QByteArray> names;
    names[Title] = "title";
    return names;
}
