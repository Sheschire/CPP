/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:07:32 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/09 17:07:33 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook() : index(0) {}

Phonebook::~Phonebook() {}

void    Phonebook::addContact(void)
{
    std::cout << "index = " << this->index << std::endl;
    if (this->index == 8)
        this->index = 0;
    // if (this->index == 3)
    // {
    //     this->_contact_arr[0].getContact();
    //     this->_contact_arr[1].getContact();
    //     this->_contact_arr[2].getContact();
    // }
    std::cout << " " << std::endl;
    std::cout << "Enter new contact informations :" << std::endl;
    this->addInfos("First Name : ", &Contact::setFirstName, this->index);
    this->addInfos("Last Name : ", &Contact::setLastName, this->index);
    this->addInfos("Nick Name : ", &Contact::setNickName, this->index);
    this->addInfos("Phone Number : ", &Contact::setPhoneNumber, this->index);
    this->addInfos("Darkest Secret : ", &Contact::setDarkestSecret, this->index);
    std::cout << "A new contact has been added to Phonebook !" << std::endl;
    std::cout << " " << std::endl;
    this->index++;
}

void    Phonebook::addInfos(std::string prompt, int (Contact::*f)(std::string), int index)
{
    std::string input;
    bool        valid_input = false;

    while (valid_input != true)
    {
        std::cout << prompt;
        std::getline(std::cin, input);
        if ((this->_contact_arr[index].*f)(input) == 1)
            valid_input = true;
        else if ((this->_contact_arr[index].*f)(input) == EMPTY_STRING)
            std::cout << "Error: Empty string is not allowed" << std::endl;
        else if ((this->_contact_arr[index].*f)(input) == NOT_A_DIGIT)
            std::cout << "Error: Only digits are allowed" << std::endl;
        else if ((this->_contact_arr[index].*f)(input) == INVALID_NUMBER)
            std::cout << "Error: Phone number needs to contain 10 digits" << std::endl;
    }
}