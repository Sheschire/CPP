#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <cctype>

#define EMPTY_STRING 0
#define	NOT_A_DIGIT -1
#define	INVALID_NUMBER -2

class Contact
{
	private:
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;

	public:
	Contact();
	~Contact();

	int	setFirstName(std::string firstname);
	int	setLastName(std::string lastname);
	int	setNickName(std::string nickname);
	int	setPhoneNumber(std::string phone);
	int	setDarkestSecret(std::string secret);

	void	getContact() const;

	void	color(std::string c, std::string s) const;
};

#endif