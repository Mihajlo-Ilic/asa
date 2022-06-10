#include "listmodel.h"

ListModel::ListModel()
{

}

void ListModel::clicked(int i)
{
    if (i >= 0 && i < _items.size())
    {
        _items[i]->clicked();
    }
}
