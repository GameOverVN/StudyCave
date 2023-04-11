using namespace std;

#include <iostream>

#include "Client.h"
#include "User.h"

namespace BAA {

    void Client::setService(string service)
    {
        this->service = service;
    }

    void Client::showUserInfo()
    {
        cout << "\tUser: " << this->login << endl;
        cout << "\tName: " << this->name << endl;
        cout << "\tSurname: " << this->surname << endl;
        cout << "\tAge: " << this->age << endl;
        cout << "\tService: " << this->service << endl;
    }

    void Client::registration()
    {
        cout << "\n\t Enter name of new Client: ";
        string userName;
        cin >> userName;
        setName(userName);

        cout << "\n\t Enter surname of new Client: ";
        string userSurname;
        cin >> userSurname;
        setSurname(userSurname);

        cout << "\n\t Enter age of new Client: ";
        string userAge;
        cin >> userAge;
        setAge(userAge);

        cout << "\n\t Enter login of new Client: ";
        string userLogin;
        cin >> userLogin;
        setLogin(userLogin);

        cout << "\n\t Enter password of new Client: ";
        string userPassword;
        cin >> userPassword;
        setPassword(userPassword);

        cout << "\n\t Enter service of new Client: ";
        string userService;
        cin >> userService;
        setService(userService);
    }

    ostream& operator<<(ostream& out, Client &customer)
    {
        customer.showUserInfo();

        return out;
    }


    istream& operator>>(istream& in, Client &customer)
    {
        customer.registration();

        return in;
    }

    bool operator==(Client &firstCustomer, Client &secondCustomer)
    {
        if((firstCustomer.login == secondCustomer.login) && (firstCustomer.password == secondCustomer.password))
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool operator!=(Client &firstCustomer, Client &secondCustomer)
    {
        if((firstCustomer.login != secondCustomer.login) && (firstCustomer.password != secondCustomer.password))
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool operator<(Client &firstCustomer, Client &secondCustomer)
    {
        if((firstCustomer.name < secondCustomer.name) && (firstCustomer.surname < secondCustomer.surname))
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool operator>(Client &firstCustomer, Client &secondCustomer)
    {
        if((firstCustomer.name > secondCustomer.name) && (firstCustomer.surname > secondCustomer.surname))
        {
            return true;
        }
        else
        {
            return false;
        }
    }

} // BAA