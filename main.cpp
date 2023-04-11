#include <iostream>
#include <string>

#include "Menu.h"
#include "MenuItem.h"
#include "Employee.h"
#include "Client.h"
#include "Car.h"

using namespace std;

void Exit();

void ShowEmployeeInfo();
void RegistrationOfNewEmployee();
void DeleteEmployee();


void ShowClientInfo();
void RegistrationOfNewClient();
void DeleteClient();

void ShowCarsInfo();
void AddingNewCar();

int SortingHat();

void ClientsSorting();
void ForwardBubbleSortingForClients();
void BackwardBubbleSortingForClients();

void EmployeeSorting();
void ForwardBubbleSortingForEmployees();
void BackwardBubbleSortingForEmployees();

BAA::Client* BAA::Menu::customers;
BAA::Employee* BAA::Menu::workers;
BAA::Car* BAA::Menu::someCars;
int BAA::Menu::customersQuantity = 0;
int BAA::Menu::workersQuantity = 0;
int BAA::Menu::carsQuantity = 0;


int main()
{
    
    BAA::MenuItem employeeRegistration("Employee registration", RegistrationOfNewEmployee);
    BAA::MenuItem clientRegistration("Client registration", RegistrationOfNewClient);

    BAA::MenuItem employeeInfo("Employee list", ShowEmployeeInfo);
    BAA::MenuItem clientInfo("Client list", ShowClientInfo);

    BAA::MenuItem clientRemoving("Client deleting", DeleteClient);
    BAA::MenuItem employeeRemoving("Employee deleting", DeleteEmployee);


    BAA::MenuItem carsAdding("Cars adding", AddingNewCar);
    BAA::MenuItem carsInfo("Car list", ShowCarsInfo);

    BAA::MenuItem sortingListOfClients("Sort list of clients", ClientsSorting);
    BAA::MenuItem sortingListOfEmployees("Sort list of employees", EmployeeSorting);

    BAA::MenuItem exitFunction("Exit", Exit);

    BAA::MenuItem callbackOfMainMenu[11] = {employeeRegistration, clientRegistration, employeeInfo,clientInfo, carsAdding,  carsInfo, sortingListOfEmployees, sortingListOfClients, employeeRemoving, clientRemoving, exitFunction};

    BAA::Menu mainMenu("Main Menu", callbackOfMainMenu, 11);

    mainMenu.run();

    return 0;
}

void ShowEmployeeInfo()
{
    if(BAA::Menu::workersQuantity == 0)
    {
        cout << endl << "\t [There is no employees, try adding them or at least advertise your car dealership]" << endl;
    }
    else {
        cout << endl << "\tList of employees: \n";
        for (int i = 0; i < BAA::Menu::workersQuantity; i++)
        {
            cout << "\t[Employee " << i + 1 << "] \n";
            cout << BAA::Menu::workers[i];
            cout << endl;
        }
    }
}
void ShowClientInfo()
{
    if(BAA::Menu::customersQuantity == 0)
    {
        cout << endl << "\t[There is no clients, try adding them or at least advertise your car dealership]" << endl;
    }
    else {
        cout << endl << "\tList of clients: \n";
        for (int i = 0; i < BAA::Menu::customersQuantity; i++)
        {
            cout << "\t[Client " << i + 1 << "] \n";
            cout << BAA::Menu::customers[i];
            cout << endl;
        }
    }
}
void ShowCarsInfo()
{
    if(BAA::Menu::carsQuantity == 0)
    {
        cout << endl << "\t[There is no cars, try adding them or at least advertise your car dealership]" << endl;
    }
    else {
        cout << endl << "\tList of cars: \n";
        for (int i = 0; i < BAA::Menu::carsQuantity; i++)
        {
            cout << "\t[Car " << i + 1 << "] \n";
            cout << BAA::Menu::someCars[i];
            cout << endl;
        }
    }
}

void RegistrationOfNewEmployee()
{
    cout << "\n\tEnter number of employees you want to add: ";
    if(BAA::Menu::workersQuantity != 0)
    {

        int newQuantity;
        cin >> newQuantity;
        BAA::Menu::workersQuantity += newQuantity;


        BAA::Employee* newArrayOfWorkers = new BAA::Employee[BAA::Menu::workersQuantity];
        for(int i = 0; i < BAA::Menu::workersQuantity - newQuantity; i++)
        {
            newArrayOfWorkers[i] = BAA::Menu::workers[i];
        }

        for(int i = BAA::Menu::workersQuantity - newQuantity; i < BAA::Menu::workersQuantity; i ++)
        {
            cin >> newArrayOfWorkers[i];
        }
        delete[] BAA::Menu::workers;
        BAA::Menu::workers = newArrayOfWorkers;

        cout << "\n\t [Employee was added]" << endl;

    }
    else
    {
        cin >> BAA::Menu::workersQuantity;
        BAA::Menu::workers = new BAA::Employee[BAA::Menu::workersQuantity];
        for (int i = 0; i < BAA::Menu::workersQuantity; i++)
        {
            cin >> BAA::Menu::workers[i];
            cout << "\n\t [Employee was added]" << endl;
        }

    }
}

void RegistrationOfNewClient()
{
    cout << "\n\tEnter number of clients you want to add: ";
    if(BAA::Menu::customersQuantity != 0)
    {
        int newQuantity;
        cin >> newQuantity;
        BAA::Menu::customersQuantity += newQuantity;


        BAA::Client* newArrayOfCustomers = new BAA::Client[BAA::Menu::customersQuantity];
        for(int i = 0; i < BAA::Menu::customersQuantity - newQuantity; i++)
        {
            newArrayOfCustomers[i] = BAA::Menu::customers[i];
        }

        for(int i = BAA::Menu::customersQuantity - newQuantity; i < BAA::Menu::customersQuantity; i ++)
        {
            cin >> newArrayOfCustomers[i];
        }
        delete[] BAA::Menu::customers;
        BAA::Menu::customers = newArrayOfCustomers;

        cout << "\n\t [Client was added]" << endl;

    }
    else
    {
        cin >> BAA::Menu::customersQuantity;
        BAA::Menu::customers = new BAA::Client[BAA::Menu::customersQuantity];
        for (int i = 0; i < BAA::Menu::customersQuantity; i++)
        {
            cin >> BAA::Menu::customers[i];
            cout << "\n\t [Client was added]" << endl;
        }

    }
}

void AddingNewCar()
{
    cout << "\n\tEnter number of cars you want to add: ";
    if(BAA::Menu::carsQuantity != 0)
    {
        int newQuantity;
        cin >> newQuantity;
        BAA::Menu::carsQuantity += newQuantity;


        BAA::Car* newArrayOfCars = new BAA::Car[BAA::Menu::carsQuantity];
        for(int i = 0; i < BAA::Menu::carsQuantity - newQuantity; i++)
        {
            newArrayOfCars[i] = BAA::Menu::someCars[i];
        }

        for(int i = BAA::Menu::carsQuantity - newQuantity; i < BAA::Menu::carsQuantity; i ++)
        {
            cin >> newArrayOfCars[i];
        }
        delete[] BAA::Menu::someCars;
        BAA::Menu::someCars = newArrayOfCars;

        cout << "\n\t [Car was added]" << endl;

    }
    else
    {
        cin >> BAA::Menu::carsQuantity;
        BAA::Menu::someCars = new BAA::Car[BAA::Menu::carsQuantity];
        for (int i = 0; i < BAA::Menu::carsQuantity; i++)
        {
            cin >> BAA::Menu::someCars[i];
            cout << "\n\t [Car was added]" << endl;
        }

    }
}

void DeleteEmployee()
{
    if(BAA::Menu::workersQuantity == 0)
    {
        cout << endl << "\t[There is no employees to delete, try adding them or at least advertise your car dealership]" << endl;
    }
    else
    {
        cout << "\n\t Enter number of employee you want to delete: ";
        int deleteNumber;
        cin >> deleteNumber;

        BAA::Employee* newArrayOfWorkers = new BAA::Employee[BAA::Menu::workersQuantity - 1];
        int shiftIndex = 0;
        for(int i = 0; i < BAA::Menu::workersQuantity - 1; i++)
        {
            if (i == deleteNumber - 1)
            {
                shiftIndex++;
            }
            newArrayOfWorkers[i] = BAA::Menu::workers[i + shiftIndex];
        }

        delete[] BAA::Menu::workers;
        BAA::Menu::workers = newArrayOfWorkers;

        BAA::Menu::workersQuantity --;

        cout << "\n\t [Employee was deleted]" << endl;

    }
}

void DeleteClient()
{
    if(BAA::Menu::customersQuantity == 0)
    {
        cout << endl << "\t[There is no clients to delete, try adding them or at least advertise your car dealership]" << endl;
    }
    else
    {
        cout << "\n\t Enter number of client you want to delete: ";
        int deleteNumber;
        cin >> deleteNumber;

        BAA::Client* newArrayOfCustomers = new BAA::Client[BAA::Menu::customersQuantity - 1];
        int shiftIndex = 0;
        for(int i = 0; i < BAA::Menu::customersQuantity - 1; i++)
        {
            if(i == deleteNumber - 1)
            {
                shiftIndex ++;
            }
            newArrayOfCustomers[i] = BAA::Menu::customers[i + shiftIndex];

        }

        delete[] BAA::Menu::customers;
        BAA::Menu::customers = newArrayOfCustomers;

        BAA::Menu::customersQuantity --;

        cout << "\n\t [Client was deleted]" << endl;

    }
}

void DeleteCar()
{
    if(BAA::Menu::carsQuantity == 0)
    {
        cout << endl << "\t[There is no cars to delete, try adding them or at least advertise your car dealership]" << endl;
    }
    else
    {
        cout << "\n\t Enter number of car you want to delete: ";
        int deleteNumber;
        cin >> deleteNumber;

        BAA::Car* newArrayOfCars = new BAA::Car[BAA::Menu::carsQuantity - 1];
        int shiftIndex = 0;
        for(int i = 0; i < BAA::Menu::carsQuantity - 1; i++)
        {
            if(i == deleteNumber - 1)
            {
                shiftIndex ++;
            }
            newArrayOfCars[i] = BAA::Menu::someCars[i + shiftIndex];

        }

        delete[] BAA::Menu::someCars;
        BAA::Menu::someCars = newArrayOfCars;

        BAA::Menu::carsQuantity --;

        cout << "\n\t [Car was deleted]" << endl;

    }
}

int SortingHat()
{
    cout << "\n\t Choose type of sorting: \n"
            "\t1.Forward \n"
            "\t2.Backward \n"
            "\t>> ";
    int sortingTypeID;
    cin >> sortingTypeID;

    return sortingTypeID;
}

void ClientsSorting()
{
    switch(SortingHat())
    {
        case 1:
            ForwardBubbleSortingForClients();
            cout  << "\n\t [Sorting was successful] \n";
            break;

        case 2:
            BackwardBubbleSortingForClients();
            cout  << "\n\t [Sorting was successful] \n";
            break;

        default:
            cout << "\n\t Unknown command \n";
            break;
    }

}

void EmployeeSorting()
{
    switch(SortingHat())
    {
        case 1:
            ForwardBubbleSortingForEmployees();
            cout  << "\n\t [Sorting was successful] \n";
            break;

        case 2:
            BackwardBubbleSortingForEmployees();
            cout  << "\n\t [Sorting was successful] \n";
            break;

        default:
            cout << "\n\t Unknown command \n";
            break;
    }

}

void ForwardBubbleSortingForClients()
{
    for(int i = 0; i < BAA::Menu::customersQuantity; i ++)
    {
        for(int j = 0; j < BAA::Menu::customersQuantity; j ++)
        {
            if(BAA::Menu::customers[i] < BAA::Menu::customers[j])
            {
                BAA::Client buffCustomer;
                buffCustomer = BAA::Menu::customers[i];
                BAA::Menu::customers[i] = BAA::Menu::customers[j];
                BAA::Menu::customers[j] = buffCustomer;
            }
        }
    }
}

void BackwardBubbleSortingForClients()
{
    for(int i = 0; i < BAA::Menu::customersQuantity; i ++)
    {
        for(int j = 0; j < BAA::Menu::customersQuantity; j ++)
        {
            if(BAA::Menu::customers[i] > BAA::Menu::customers[j])
            {
                BAA::Client buffCustomer;
                buffCustomer = BAA::Menu::customers[i];
                BAA::Menu::customers[i] = BAA::Menu::customers[j];
                BAA::Menu::customers[j] = buffCustomer;
            }
        }
    }
}

void ForwardBubbleSortingForEmployees()
{
    for(int i = 0; i < BAA::Menu::workersQuantity; i ++)
    {
        for(int j = 0; j < BAA::Menu::workersQuantity; j ++)
        {
            if(BAA::Menu::workers[i] < BAA::Menu::workers[j])
            {
                BAA::Employee buffWorker;
                buffWorker = BAA::Menu::workers[i];
                BAA::Menu::workers[i] = BAA::Menu::workers[j];
                BAA::Menu::workers[j] = buffWorker;
            }
        }
    }
}

void BackwardBubbleSortingForEmployees()
{
    for(int i = 0; i < BAA::Menu::workersQuantity; i ++)
    {
        for(int j = 0; j < BAA::Menu::workersQuantity; j ++)
        {
            if(BAA::Menu::workers[i] > BAA::Menu::workers[j])
            {
                BAA::Employee buffWorker;
                buffWorker = BAA::Menu::workers[i];
                BAA::Menu::workers[i] = BAA::Menu::workers[j];
                BAA::Menu::workers[j] = buffWorker;
            }
        }
    }
}

void Exit()
{
    cout << "\n\t [Complete]" << endl;
}