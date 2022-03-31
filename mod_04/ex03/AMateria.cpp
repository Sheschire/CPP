/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 15:50:14 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/31 16:15:07 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(){
	std::cout << "AMateria default constructor called." << std::endl;
}

AMateria::~AMateria(){
	std::cout << "AMateria default destructor called." << std::endl;
}

AMateria::AMateria(AMateria const & src){
	std::cout << "AMateria copy constructor called." << std::endl;
	*this = src;
}

AMateria & AMateria::operator=(AMateria const & rhs){
	std::cout << "AMateria assignment operator called." << std::endl;
	(void)rhs;
	return (*this);
}

AMateria::AMateria(std::string const & type) : _type(type){
	std::cout << "AMateria parametric constructor called." << std::endl;
}

////////////////////////////////////////////////

std::string	const & AMateria::getType(void) const{
	return (this->_type);
}

void	AMateria::use(ICharacter & target){
	std::cout << "You are using a Materia on " << target.getName() << std::endl;
}