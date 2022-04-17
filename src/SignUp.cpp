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
    bool found_uppercase = 0;
    bool found_special = 0;
    bool found_number = 0;
    
    unsigned int password_length = password.length();

    try 
    {
        if (email.length() > 30)
        {
            throw "Email length too big\n";
            return;
        }

        for (auto car : email)
        {
            if (car == '@')
            {
                found_at = 1;
            }
        }

        if (found_at == 0 || email[email.length() - 1] == '@')
        {   
            throw "Invalid email\n";
        }
        if (password_length < 8)
        {
            throw "Password too short. It must have at least 8 characters";
        }
        for (auto car : password)
        {
            if (isupper(car))
            {
                found_uppercase = 1;
            }
            else if (isdigit(car))
            {
                found_number = 1;
            }
            else if (car == '.' || car == '!' || car == '?')
            {
                found_special = 1;
            }
        }

        if (!found_uppercase)
        {
            throw "Password must contain an uppercase letter";
        }
        if (!found_number)
        {
            throw "Password must contain a number";
        }
        if (!found_special)
        {
            throw "Password must contain a special character (. ! ?)";
        }

        for (auto car : first_name)
        {
            if (!isalpha(car))
            {
                throw "Invalid first name";
            }
        }

        for (auto car : last_name)
        {
            if (!isalpha(car))
            {
                throw "Invalid last name";
            }
        }

        for (auto car : phone_number)
        {
            if (!isalnum(car))
            {
                throw "Invalid phone number";
            }
        }
    }
    catch(const char * message)
    {
        std::cout << message << '\n';
        return;
    }

    this->HashPassword();
    this->PutUserInDB();
}

void SignUp::HashPassword()
{
    password = std::to_string(std::hash<std::string>{} (password));
}

void SignUp::PutUserInDB()
{
    std::ofstream file_pw, file_det;

    file_pw.open("./database/users.txt", std::ios_base::app);
    file_det.open("./database/details.txt", std::ios_base::app);

    file_pw << email << " " << password << "\n";
    file_det << email << " " << first_name << " " << last_name << " " << phone_number << "\n";

    file_pw.close();
    file_det.close();
}