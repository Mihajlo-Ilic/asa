#include "mainmenudelegate.h"
#include "lightsmenu.h"
#include "shadesmenu.h"
#include "router.h"

MainMenuDelegate::MainMenuDelegate(QObject *parent)
    : ListDelegate{parent} , _myExperience("")
{

}

void MainMenuDelegate::setExperience(const std::string &exp)
{
    _myExperience = exp;
}

void MainMenuDelegate::clicked()
{
    if (_myExperience != "")
    {
        auto router = Router::getInstance();

        if (router != nullptr)
        {
            if (_myExperience == "lights")
            {
                auto lightsMenu = new LightsMenu();
                router->pushScreen(lightsMenu);
            }
            if (_myExperience == "shades")
            {
                auto shadesMenu = new ShadesMenu();
                router->pushScreen(shadesMenu);
            }
        }
    }
}
