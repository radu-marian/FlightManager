#pragma once
#include <iostream>
#include <string>
#include <unordered_map>
#include <fstream>

#include "AdminMenu.h"

class LogIn
{
private:
    std::string email;
    std::string password;
public:
    LogIn();
    void GetCredentials();
    void HashPassword();
    void CheckUser();
};