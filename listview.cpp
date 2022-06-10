#include "listview.h"

ListScreen::ListScreen(QObject *parent)
    : Screen(parent)
{
    _type = ScreenType::ListViewScreen;
}

QAbstractListModel *ListScreen::listModel() const
{
    return _model;
}

void ListScreen::clicked(int index)
{

}
