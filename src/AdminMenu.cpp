#include "../include/AdminMenu.h"

AdminMenu::AdminMenu()
{
    this->GetOption();
}


void AdminMenu::GetOption()
{
    std::cout << "1. Add a flight";

    std::cout << "Enter an option: ";
    std::cin >> option;

    if (option == 1)
    {
        
    }
    else
    {
        this->GetOption();
    }
}