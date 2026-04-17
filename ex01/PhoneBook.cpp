#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

PhoneBook::PhoneBook() : index(0), total(0) {}

PhoneBook::PhoneBook(const PhoneBook &other) { *this = other; }

PhoneBook::~PhoneBook() {}

PhoneBook &PhoneBook::operator=(const PhoneBook &other)
{
	if (this != &other)
	{
		for (int i = 0; i < other.total; i++)
			contacts[i] = other.contacts[i];
		index = other.index;
		total = other.total;
	}
	return (*this);
}

void PhoneBook::addContact()
{
	Contact newContact;
	newContact.setContact();

	contacts[index] = newContact;
	index = (index + 1) % 8;
	if (total < 8)
		total++;
}

bool isNumber(const std::string &s)
{
	for (size_t i = 0; i < s.length(); i++)
		if (s[i] < '0' || s[i] > '9')
			return false;
	return true;
}

void PhoneBook::searchContact() const
{
	if (total == 0)
	{
		std::cout << "PhoneBook is empty!" << std::endl;
		return;
	}
	std::cout << "|  Index   |FirstName | LastName | Nickname |" << std::endl;
	for (int i = 0; i < total; i++)
	{
		std::cout << "|" << std::setw(10) << std::right << i << "|";
		contacts[i].displayContactTruncate();
		std::cout << std::endl;
	}
	std::string input;
	std::cout << "Enter index of contact: ";
	std::getline(std::cin, input);
	if (!isNumber(input))
	{
		std::cout << "Invalid input!" << std::endl;
		return;
	}
	std::istringstream iss(input);
	int idx;
	char extra;
	if (!(iss >> idx) || (iss >> extra))
	{
		std::cout << "Invalid input!" << std::endl;
		return;
	}
	if (idx < 0 || idx >= total)
	{
		std::cout << "Index out of range!" << std::endl;
	}
	else
	{
		contacts[idx].displayContact();
	}
}
