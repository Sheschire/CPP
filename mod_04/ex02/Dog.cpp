/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:00:45 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/23 15:14:28 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Dog::Dog(void) {
	this->_type = "Dog";
	std::cout << this->_type << " constructor called." << std::endl;
	this->brain = new Brain();
}

Dog::~Dog(void){
	std::cout << this->_type << " destructor called." << std::endl;
	delete(this->brain);
}

Dog::Dog(Dog const & src) : Animal(src){
	std::cout << "Dog copy constructor called." << std::endl;
	*this = src;
}

Dog & Dog::operator=(Dog const & rhs){
	std::cout << "Dog assignement operator called." << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
		*(this->brain) = *(rhs.getBrain());
	}
	return(*this);
}

Animal & Dog::operator=(Animal const & rhs) {
	std::cout << "Animal assignement operator called.(Dog)" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs.getType();
		*(this->brain) = *(rhs.getBrain());
	}
	return(*this);
}



////////////////////////////////////////////
void	Dog::makeSound(void) const {
	color("green", "* Wouaf ! *\n");
}

void	Dog::eat(void) const{
	std::cout << this->_type << " eats meat" << std::endl;
}

void	Dog::setBrain(std::string s, int i){
	this->brain->setIdeas(s, i);
}

Brain	*Dog::getBrain(void) const{
	return (this->brain);
}