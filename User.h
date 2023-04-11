#pragma once

#ifndef LAB_VP_1_2_USER_H
#define LAB_VP_1_2_USER_H

#include <string>

using namespace std;

namespace BAA {

    class User{

        public:

            string getName();
            void setName(string name);

            string getSurname();
            void setSurname(string surname);

            string getAge();
            void setAge(string age);

            string getLogin();
            void setLogin(string login);

            void setPassword(string password);

            virtual void registration() = 0;

            virtual void showUserInfo() = 0;

        protected:

            string name;
            string surname;
            string age;
            string login;
            string password;


    };

}

#endif //LAB_VP_1_2_USER_H
