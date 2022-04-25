#pragma once
#include <iostream>
#include <memory>

#include "./LogIn.h"
#include "./SignUp.h"

class InitialMenu
{
private:
    int option;
public:
    InitialMenu();
    void GetOption();
};