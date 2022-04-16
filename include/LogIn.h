#pragma once
#include <iostream>

class LogIn
{
private:
    std::string email;
    std::string password;
public:
    LogIn();
    void GetCredentials();
};