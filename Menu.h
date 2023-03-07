//
// Created by Артём on 01.03.2023.
//

#ifndef VP_LAB_1_2_MENU_H
#define VP_LAB_1_2_MENU_H
#include <string>
#include <iostream>

namespace BAA {

    class Menu {

    public:

        void printMenu();
        int repeatChoice(int);
        void startOption();
        Menu(std::string);

    private:
        std::string mMenu = "1.Calculate square root of 25 \n"
                            "2.Congratulate the user attending to the IUK4 \n"
                            "3.Output a herringbone pseudographic \n"
                            "4.Exit";
        std::string mMenuName;
        int mMenuPointsQuantity;
        int mLastChoice;
        int *options = new int[15];

    };

} // BAA

#endif //VP_LAB_1_2_MENU_H
