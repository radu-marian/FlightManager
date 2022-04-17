#include "../include/SignUp.h"

SignUp::SignUp()
{
    this->GetInfo();
}

void SignUp::GetInfo()
{
    std::cout << "Email: ";
    std::cin >> email;
    std::cout << "Password: ";
    std::cin >> password;
    std::cout << "First name: ";
    std::cin >> first_name;
    std::cout << "Last name: ";
    std::cin >> last_name;
    std::cout << "Phone number: ";
    std::cin >> phone_number;

    this->CheckValidity();
}

void SignUp::CheckValidity()
{
    bool found_at = 0;
    if (email.length() > 30)
    {
        std::cout << "Email length too big\n";
        return;
    }

    for (auto car : email)
    {
        if (car == '@')
        {
            found_at = 1;
            break;
        }
    }

    if (found_at == 0 || email[email.length() - 1] == '@')
    {
        std::cout << "Invalid email\n";
        return;
    }

    if (password.length() < 8)
    {
        std::cout << "Password too short. It must have at least 8 characters\n";
    }


}