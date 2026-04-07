#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
	private:
		Contact contacts[8];
		int index;
		int total;

	public:
		PhoneBook();
		PhoneBook(const PhoneBook &other);
		~PhoneBook();
		PhoneBook &operator=(const PhoneBook &other);
		void addContact();
		void searchContact() const;
};

#endif
