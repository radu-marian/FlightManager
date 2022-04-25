#include "../include/LogIn.h"

LogIn::LogIn()
{
    this->GetCredentials();
}

void LogIn::GetCredentials()
{
    std::cout << "Email:";
    std::cin >> email;
    std::cout << "Password:";
    std::cin >> password;

    this->CheckUser();
}

void LogIn::HashPassword()
{
    password = std::to_string(std::hash<std::string>{} (password));
}

void LogIn::CheckUser()
{
    std::string line, temp_email, temp_password;
    unsigned int length;
    std::ifstream file;

    int i;

    file.open("./database/users.txt");

    this->HashPassword();

    while (std::getline(file, line))
    {
        length = line.length();

        for (i = 0; i < length; i++)
        {
            if (line[i] == ' ')
                break;
        }

        temp_email = line.substr(0, i);
        temp_password = line.substr(i + 1, length - i);

        if (email == temp_email)
        {
            if (password == temp_password)
            {
                AdminMenu admin_menu_object;
            }
            else
            {
                std::cout << "Incorrect password!\n";
            }
        }
        else
        {
            std::cout << "You are not registered!\n";
        }

    }


    file.close();
}