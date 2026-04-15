// main.cpp
#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int main() {
	PhoneBook phonebook;
	std::string command;

	std::cout << "Welcome to My Awesome PhoneBook!" << std::endl;

	while (true) {
		std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, command);
		if (std::cin.eof())
			return (0);
		if (command == "ADD")
		{
			phonebook.addContact();
		}
        else if (command == "SEARCH")
		{
			phonebook.searchContact();
        }
        else if (command == "EXIT")
		{
			std::cout << "Bye!" << std::endl;
			break;
        }
        else if (std::cin.eof())
		{
			std::cout << "\nBye!" << std::endl;
			break;
		}
		else
		{
			std::cout << "Invalid command!" << std::endl;
		}
	}

	return (0);
}
