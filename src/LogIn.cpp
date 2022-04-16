#include "../include/LogIn.h"

LogIn::LogIn()
{
    std::cout << "here";
    this->GetCredentials();
}

void LogIn::GetCredentials()
{
    std::cout << "Email:";
    std::cin >> email;
    std::cout << "Password:";
    std::cin >> password;
}