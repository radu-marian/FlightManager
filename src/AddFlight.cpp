#include "../include/AddFlight.h"

AddFlight::AddFlight()
{
    this->GetInfo();
}

void AddFlight::GetInfo()
{
    std::cout << "Departure: ";
    std::cin >> departure;
    std::cout << "Arrival: ";
    std::cin >> arrival;
    std::cout << "Enter departure time: \n";
    this->departure_time.GetTime();
    if (!this->departure_time.IsValid())
    {
        std::cout << "Invalid time\n";
        return;
    }
    
    // we assign a random number to id
    // normally there would be a service
    srand(time(NULL));
    id = rand() % 10000;

    this->AddToFile();
}

void AddFlight::AddToFile()
{
    std::ofstream file, new_file;
    std::stringstream ss;
    std::string line, file_path;

    file.open("./database/flights.txt");
    line = std::to_string(id) + " " + departure + " " + arrival + " ";
    file << line;
    ss << line;
    file << departure_time;
    ss << departure_time;

    file_path = "./database/";
    file_path += std::to_string(id) + ".txt";
    new_file.open(file_path.c_str());

    file.close();
    new_file.close();
}