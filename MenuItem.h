#pragma once

#ifndef LAB_VP_1_2_MENUITEM_H
#define LAB_VP_1_2_MENUITEM_H

#include <string>

using namespace std;

namespace BAA {

    class MenuItem {
    public:
        typedef void(*Callback)();

        MenuItem(string title, Callback callback);

        string getTitle();

        void setTitle(string title);

        void printPoint();

        void pick();

    private:
        string title;
        Callback callback;

    };

}

#endif
