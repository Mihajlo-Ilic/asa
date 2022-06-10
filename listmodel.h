#ifndef LISTMODEL_H
#define LISTMODEL_H

#include <QObject>
#include <QAbstractListModel>
#include "listdelegate.h"
#include <vector>

class ListModel : public QAbstractListModel
{
    Q_OBJECT
public:
    ListModel();
    Q_INVOKABLE void clicked(int i);
protected:
     std::vector<ListDelegate*> _items;
};

#endif // LISTMODEL_H
