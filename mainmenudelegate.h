#ifndef MAINMENUDELEGATE_H
#define MAINMENUDELEGATE_H

#include <QObject>
#include "listdelegate.h"

class MainMenuDelegate : public ListDelegate
{
    Q_OBJECT
public:
    explicit MainMenuDelegate(QObject *parent = nullptr);
    void setExperience(const std::string& exp);
    void clicked();
private:
    std::string _myExperience;
};

#endif // MAINMENUDELEGATE_H
