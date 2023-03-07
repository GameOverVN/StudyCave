//
// Created by Артём on 01.03.2023.
//

#include "Menu.h"
#include <string>
#include <iostream>

namespace BAA {

    void Menu::printMenu()
    {
        std::cout << mMenu << std::endl;
    }

    int Menu::repeatChoice(int inputCommandID)
    {
        do
        {
            std::cout << "Enter point of menu: \n"
                         ">> ";
            std::cin >> inputCommandID;
        }
        while(inputCommandID < 1 || inputCommandID > 4);

        return inputCommandID;
    }

    void Menu::startOption()
    {
        int commandID = INT_MAX;
        switch(Menu::repeatChoice(commandID))
        {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 0:
                break;
            default:
                break;
        }
    }

}