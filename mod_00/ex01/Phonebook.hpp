#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <cctype>
#include <cstdlib>
#include "Contact.hpp"
#include <iomanip>


class   Phonebook
{
	private:
		Contact _contact_arr[8];
		int		index;

	public:
	Phonebook();
	~Phonebook();

	void    addContact();
	void	addInfos(std::string prompt, int (Contact::*f)(std::string), int index);
	void	searchContact();
	void	printPrompt(void);
	void	printContactList(const char *prompt_array[4]);
	void	printContact(int index);

	int	getIndex() const;

	int	checkInput(std::string input) const;
	void	color(std::string c, std::string s) const;
};

#endif