#pragma once
#include <iostream>

class SignUp
{
private:
    std::string email;
    std::string password;
    std::string first_name;
    std::string last_name;
    std::string phone_number;

public:
    SignUp();

    void GetInfo();

    void CheckValidity();
};