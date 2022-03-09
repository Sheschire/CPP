/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:08:24 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/09 17:08:25 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

void    actionExit(void)
{
    std::cout << "Program exit" << std::endl;
    exit(0);
}

void    commandListener(std::string input)
{
    Phonebook   repertoire;

    if (!input.compare("add"))
        repertoire.addContact();
    else if (!input.compare("exit"))
        actionExit();
    else
        std::cout << "Error: Enter a valid command :\
        \n1. ADD\n2. SEARCH\n3. EXIT" << std::endl;
}

int main()
{
    std::string input;
    int i = -1;
    
    while (1)
    {
        std::cout << "Enter a command :\n1. ADD\n2. SEARCH\n3. EXIT\n>> ";
        std::cin >> input;
        while (input[++i])
            input[i] = tolower(input[i]);
        commandListener(input);
    }
}