#include "../include/InitialMenu.h"

InitialMenu::InitialMenu()
{
    this->GetOption();
}

void InitialMenu::GetOption()
{
    std::cout << "1. Log In\n";
    std::cout << "2. Sign Up\n";
    std::cout << "3. Exit\n";
    std::cout << "Enter an option: ";
    std::cin >> option;

    if (option == 1)
    {
        std::unique_ptr<LogIn> log_in_object (new LogIn());
    }
    else if (option == 2)
    {

    }
    else if (option == 3)
    {
        return;
    }
    else
    {
        this->GetOption();
    }

}