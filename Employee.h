#ifndef LAB_VP_1_2_EMPLOYEE_H
#define LAB_VP_1_2_EMPLOYEE_H

#include <iostream>

#include "User.h"

using namespace std;

namespace BAA {

    class Employee : User{

        public:

            void registration() override;
            void showUserInfo() override;
            void setPost(string post);
            string getPost();
            friend istream& operator>>(istream&, Employee&);
            friend ostream& operator<<(ostream&, Employee&);
            friend bool operator==(Employee&, Employee&);
            friend bool operator!=(Employee&, Employee&);
            friend bool operator<(Employee&, Employee&);
            friend bool operator>(Employee&, Employee&);



    private:
            string post;
    };

} // BAA

#endif //LAB_VP_1_2_EMPLOYEE_H
