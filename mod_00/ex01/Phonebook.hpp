#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <cctype>
#include <cstdlib>
#include "Contact.hpp"

class   Phonebook
{
	private:
	Contact _contact_arr[8];

	public:
	Phonebook();
	~Phonebook();
	int	index;

	void    addContact();
	void	addInfos(std::string prompt, int (Contact::*f)(std::string), int index);
};

#endif