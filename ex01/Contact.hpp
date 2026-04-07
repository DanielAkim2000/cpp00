#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact {
	private:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;
		void displayField(const std::string &str) const;
	public:
		Contact();
		Contact(const Contact &other);
		~Contact();
		Contact &operator=(const Contact &other);
		void setContact();
		void displayContact() const;
		void displayContactTruncate() const;
};

#endif
