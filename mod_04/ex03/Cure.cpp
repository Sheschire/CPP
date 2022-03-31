/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:15:37 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/31 16:14:09 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : _type("cure"){
	std::cout << "Cure default constructor called." << std::endl;
}

Cure::~Cure(){
	std::cout << "Cure default destructor called." << std::endl;
}

Cure::Cure(Cure const & src){
	std::cout << "Cure copy constructor called." << std::endl;
	*this = src;
}

Cure & Cure::operator=(Cure const & rhs){
	std::cout << "Cure assignment operator called." << std::endl;
	(void)rhs;
	return (*this);
}

Cure::Cure(std::string const & type) : _type(type){
	std::cout << "Cure parametric constructor called." << std::endl;
}

///////////////////////////////////////////////

std::string	const & Cure::getType(void) const{
	return (this->_type);
}

Cure	*Cure::clone(void) const{
	Cure	*clone = new Cure();

	return (clone);
}

void	Cure::use(ICharacter & target){
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}