#include <string>

#include "User.h"

using namespace std;

namespace BAA {

    string User::getName()
    {
        return this->name;
    }
    void User::setName(string name)
    {
        this->name = name;
    }

    string User::getSurname()
    {
        return this->surname;
    }
    void User::setSurname(string surname)
    {
        this->surname = surname;
    }

    string User::getAge()
    {
        return this->age;
    }
    void User::setAge(string age)
    {
        this->age = age;
    }

    string User::getLogin()
    {
        return this->login;
    }
    void User::setLogin(string login)
    {
        this->login = login;
    }

    void User::setPassword(string password)
    {
        this->password = password;
    }

} // BAA