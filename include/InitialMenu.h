#pragma once
#include <iostream>
#include <memory>

#include "./LogIn.h"

class InitialMenu
{
private:
    int option;
    // 1 is for log in
    // 2 is for sign upf
    // 3 is for cancel

public:
    InitialMenu();
    void GetOption();
};