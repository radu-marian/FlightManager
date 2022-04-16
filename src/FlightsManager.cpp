#include <iostream>
#include <memory>

#include "../include/LogIn.h"
#include "../include/InitialMenu.h"

int main()
{
    std::cout << "Application started\n";

    std::unique_ptr<InitialMenu> inital_menu_object (new InitialMenu());
}