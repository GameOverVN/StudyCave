#include <iostream>

#include "MenuItem.h"

namespace BAA {

    MenuItem::MenuItem(string title, Callback callback) : title(title), callback(callback){}

    string MenuItem::getTitle()
    {
        return this->title;
    }

    void MenuItem::setTitle(string title)
    {
        this->title = title;
    }

    void MenuItem::printPoint()
    {
        cout << "\n\t" << this->title << " in process... " << endl;
    }

    void MenuItem::pick()
    {
        printPoint();
        callback();

    }
}
