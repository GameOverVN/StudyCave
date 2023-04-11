#include <string>
#include <iostream>

#include "Car.h"

using namespace std;

namespace BAA {

    string Car::getCarMark()
    {
        return this-> mark;
    }
    void Car::setCarMark(string mark)
    {
        this->mark = mark;
    }

    string Car::getCarPrice()
    {
        return this-> price;
    }
    void Car::setCarPrice(string price)
    {
        this->price = price;
    }

    string Car::getCarYearOfRelease()
    {
        return this-> yearOfRelease;
    }
    void Car::setCarYearOfRelease(string yearOfRelease)
    {
        this->yearOfRelease = yearOfRelease;
    }

    string Car::getCarDescription()
    {
        return this-> description;
    }
    void Car::setCarDescription(string description)
    {
        this->description = description;
    }

    CarStats Car::getCarStats()
    {
        return this->stats;
    }
    void Car::setCarStats(CarStats stats)
    {
        this->stats = stats;
    }

    void Car::printCar()
    {
        cout << "\tCar: " << getCarMark() << "\n\t" << "Price: " << getCarPrice() << "\n\t"
        << "Year of release: " << getCarYearOfRelease() << "\n\t" << "\n\t" << "Car colour: " << getCarStats().colour
        << "\n\t" << "Car mileage: " << getCarStats().mileage << "\n\t" << "Car horsepower: " << getCarStats().horsepower
        << "\n\t" << "Car wheel drive: " << getCarStats().wheelDrive << "Description: " << getCarDescription() << endl;
    }

    void Car::addCar()
    {

        cout << "\n\t Enter mark of Car: ";
        string carMark;
        cin >> carMark;
        setCarMark(carMark);

        cout << "\n\t Enter price of Car: ";
        string carPrice;
        cin >> carPrice;
        setCarPrice(carPrice);

        cout << "\n\t Enter yearOfRelease of Car: ";
        string carYearOfRelease;
        cin >> carYearOfRelease;
        setCarYearOfRelease(carYearOfRelease);

        cout << "\n\t Enter stats of Car: ";
        string userLogin;
        cin >> userLogin;


        cout << "\n\t Enter stats of Car: ";
        CarStats buffStatsOfCar;
        int carMileage;
        cout << "\n\t Enter mileage of Car: ";
        cin >> buffStatsOfCar.mileage;
        string carColour;
        cout << "\n\t Enter colour of Car: ";
        cin >> buffStatsOfCar.colour;
        int carHorsepower;
        cout << "\n\t Enter horsepower of Car: ";
        cin >> buffStatsOfCar.horsepower;
        string carWheelDrive;
        cout << "\n\t Enter wheel drive of Car: ";
        cin >> buffStatsOfCar.wheelDrive;
        setCarStats(buffStatsOfCar);

        cout << "\n\t Enter description of Car: ";
        string carDescription;
        cin >> carDescription;
        setCarDescription(carDescription);
    }

    ostream& operator<<(ostream& out, Car &car)
    {
        car.printCar();

        return out;
    }

    istream& operator>>(istream& in, Car &car)
    {
        car.addCar();

        return in;
    }

} // BAA