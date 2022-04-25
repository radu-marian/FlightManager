#include "../include/AdminMenu.h"

AdminMenu::AdminMenu()
{
    this->GetOption();
}

void AdminMenu::GetOption()
{
    std::cout << "1. Add a flight\n";

    std::cout << "Enter an option: ";
    std::cin >> option;

    if (option == 1)
    {
        AddFlight add_flight_object;
    }
    else
    {
        this->GetOption();
    }
}