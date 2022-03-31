/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:15:54 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/31 16:14:28 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : _type("ice"){
	std::cout << "Ice default constructor called." << std::endl;
}

Ice::~Ice(){
	std::cout << "Ice default destructor called." << std::endl;
}

Ice::Ice(Ice const & src){
	std::cout << "Ice copy constructor called." << std::endl;
	*this = src;
}

Ice & Ice::operator=(Ice const & rhs){
	std::cout << "Ice assignment operator called." << std::endl;
	(void)rhs;
	return (*this);
}

Ice::Ice(std::string const & type) : _type(type){
	std::cout << "Ice parametric constructor called." << std::endl;
}

/////////////////////////////////////////////////

std::string	const & Ice::getType(void) const{
	return (this->_type);
}

Ice	*Ice::clone(void) const{
	Ice	*clone = new Ice();

	return (clone);
}

void	Ice::use(ICharacter & target){
	std::cout << "* shoots and ice bolt at " << target.getName() << " *" << std::endl;
}