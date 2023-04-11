#pragma once

#ifndef LAB_VP_1_2_CAR_H
#define LAB_VP_1_2_CAR_H

#include <string>

using namespace std;

struct CarStats{
    int mileage;
    string colour;
    int horsepower;
    int wheelDrive;

};

namespace BAA {

    class Car {
        public:

//            Car(string mark, string price, string yearOfRelease, string description, CarStats stats);

            string getCarMark();
            void setCarMark(string mark);

            string getCarPrice();
            void setCarPrice(string price);

            string getCarYearOfRelease();
            void setCarYearOfRelease(string yearOfRelease);

            string getCarDescription();
            void setCarDescription(string description);

            CarStats getCarStats();
            void setCarStats(CarStats stats);

            void printCar();
            void addCar();

            friend istream& operator>>(istream&, Car&);
            friend ostream& operator<<(ostream&, Car&);

        private:
            string mark;
            string price;
            string yearOfRelease;
            string description;
            CarStats stats;
    };

}

#endif
