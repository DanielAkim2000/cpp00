#include "Contact.hpp"

Contact::Contact() {}
Contact::Contact(const Contact &other) { *this = other; }
Contact::~Contact() {}
Contact &Contact::operator=(const Contact &other) {
	if (this != &other) {
		firstName = other.firstName;
		lastName = other.lastName;
		nickname = other.nickname;
		phoneNumber = other.phoneNumber;
		darkestSecret = other.darkestSecret;
	}
	return *this;
}

void Contact::setContact() {
	std::cout << "First name: ";
	std::getline(std::cin, firstName);
	std::cout << "Last name : ";
	std::getline(std::cin, lastName);
	std::cout << "Nickname : ";
	std::getline(std::cin, nickname);
	std::cout << "Phone number: ";
	std::getline(std::cin, phoneNumber);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, darkestSecret);
}

void Contact::displayContact() const {
	std::cout << "First name    : " << firstName << std::endl;
	std::cout << "Last name     : " << lastName << std::endl;
	std::cout << "Nickname      : " << nickname << std::endl;
	std::cout << "Phone number  : " << phoneNumber << std::endl;
	std::cout << "Darkest secret: " << darkestSecret << std::endl;
}

void Contact::displayField(const std::string &str) const {
	std::string tmp = str;
	if (tmp.length() > 10)
		tmp = tmp.substr(0, 9) + ".";
	std::cout << std::setw(10) << std::right << tmp;
}

void Contact::displayContactTruncate() const {
	displayField(firstName);
	std::cout << "|";
	displayField(lastName);
	std::cout << "|";
	displayField(nickname);
	std::cout << "|";
}
