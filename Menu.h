#pragma once

#ifndef LAB_VP_1_2_MENU_H
#define LAB_VP_1_2_MENU_H

#include <string>

#include "MenuItem.h"
#include "Employee.h"
#include "Client.h"
#include "Car.h"

using namespace std;

namespace BAA {

    class Menu {
        public:
            Menu(string title, MenuItem* menuPoints, int pointQuantity);
            ~Menu();

            static Employee* workers;
            static Client* customers;
            static Car* someCars;
            static int carsQuantity;
            static int workersQuantity;
            static int customersQuantity;

            string getTitle();
            void setTitle(string title);

            int getPointQuantity();

            int getLastChoiceOfUser();

            void printMenu();

            void enterNumberOfChosenPoint();

            void run();

        private:
            string title;
            int pointQuantity;
            int lastChoiceOfUser;
            MenuItem* menuPoints;
    };


}

#endif

