#include <iostream>

#include "Menu.h"
#include "MenuItem.h"
#include "Employee.h"
#include "Client.h"

using namespace std;

namespace BAA {

    Menu::Menu(string title, MenuItem* menuPoints, int pointQuantity)
    : title(title), menuPoints(menuPoints), pointQuantity(pointQuantity)
    {}

    Menu::~Menu()
    {
        delete[] menuPoints;
        delete[] workers;
        delete[] customers;
        delete[] someCars;
    }

    string Menu::getTitle()
    {
        return this->title;
    }

    void Menu::setTitle(string title)
    {
        this->title = title;
    }

    int Menu::getPointQuantity()
    {
        return this->pointQuantity;
    }

    int Menu::getLastChoiceOfUser()
    {
        return this->lastChoiceOfUser;
    }

    void Menu::printMenu()
    {
        cout << endl << "\t\t" << this->title << endl;
        for(int i = 0; i < this->pointQuantity; i++)
        {
            cout << "\t [" << i + 1 << "] " << this->menuPoints[i].getTitle() << endl;
        }
    }

    void Menu::enterNumberOfChosenPoint()
    {
        cout << "\t Enter number of point: ";
        int pointNumber;
        cin >> pointNumber;
        this->lastChoiceOfUser = pointNumber;
    }

    void Menu::run()
    {
        do
        {
            printMenu();
            enterNumberOfChosenPoint();
            menuPoints[this->lastChoiceOfUser - 1].pick();

        }while(lastChoiceOfUser != pointQuantity);
    }

} // BAA