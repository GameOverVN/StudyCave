#pragma once

#ifndef LAB_VP_1_2_CLIENT_H
#define LAB_VP_1_2_CLIENT_H

#include <string>

#include "User.h"

namespace BAA {

    class Client : User{

        public:

            void registration() override;
            void showUserInfo() override;
            void setService(string service);
            friend istream& operator>>(istream&, Client&);
            friend ostream& operator<<(ostream&, Client&);
            friend bool operator==(Client&, Client&);
            friend bool operator!=(Client&, Client&);
            friend bool operator<(Client&, Client&);
            friend bool operator>(Client&, Client&);

        private:
            string service;
    };

} // BAA

#endif //LAB_VP_1_2_CLIENT_H
