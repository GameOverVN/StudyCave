
#include "Employee.h"
#include <string>

namespace BAA {

    string Employee::getPost()
    {
        return this->post;
    }

    void Employee::setPost(string post)
    {
        this->post = post;
    }


    void Employee::showUserInfo()
    {
        cout << "\tUser: " << this->login << "\n";
        cout << "\tName: " << this->name << "\n";
        cout << "\tSurname: " << this->surname << "\n";
        cout << "\tAge: " << this->age << "\n";
        cout << "\tPost: " << this->post << "\n";
    }

    void Employee::registration()
    {
        cout << "\n\t Enter name of new Employee: ";
        string userName;
        cin >> userName;
        setName(userName);

        cout << "\n\t Enter surname of new Employee: ";
        string userSurname;
        cin >> userSurname;
        setSurname(userSurname);

        cout << "\n\t Enter age of new Employee: ";
        string userAge;
        cin >> userAge;
        setAge(userAge);

        cout << "\n\t Enter login of new Employee: ";
        string userLogin;
        cin >> userLogin;
        setLogin(userLogin);

        cout << "\n\t Enter password of new Employee: ";
        string userPassword;
        cin >> userPassword;
        setPassword(userPassword);

        cout << "\n\t Enter post of new Employee: ";
        string userPost;
        cin >> userPost;
        setPost(userPost);
    }

    ostream& operator<<(ostream& out, Employee &worker)
    {
        worker.showUserInfo();

        return out;
    }

    istream& operator>>(istream& in, Employee &worker)
    {
        worker.registration();

        return in;
    }

    bool operator==(Employee &firstWorker, Employee &secondWorker)
    {
        if((firstWorker.login == secondWorker.login) && (firstWorker.password == secondWorker.password))
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool operator!=(Employee &firstWorker, Employee &secondWorker)
    {
        if((firstWorker.login != secondWorker.login) && (firstWorker.password != secondWorker.password))
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool operator<(Employee &firstWorker, Employee &secondWorker)
    {
        if((firstWorker.name < secondWorker.name) && (firstWorker.surname < secondWorker.surname))
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool operator>(Employee &firstWorker, Employee &secondWorker)
    {
        if((firstWorker.name > secondWorker.name) && (firstWorker.surname > secondWorker.surname))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}