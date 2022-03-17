/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:24:08 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/17 12:09:09 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// CONSTRUCTORS
Fixed::Fixed() : _rawBits(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(const int i){
	std::cout << "Int constructor called" << std::endl;
	this->_rawBits = i << this->bits;
}

Fixed::Fixed(const float f){
	std::cout << "Float constructor called" << std::endl;
	int	power = pow(2, this->bits);

	this->_rawBits = roundf(f * power);
}


// CANON FORM SIDES 
Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed &	Fixed::operator=(Fixed const & rhs){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_rawBits = rhs.getRawBits();
	return (*this);
}


// OPERATORS FUNCTIONS
std::ostream & operator<<(std::ostream & o, Fixed const & rhs){
	o << rhs.toFloat();
	return (o);
}


// PUBLIC MEMBER FUNCTIONS
int		Fixed::getRawBits(void) const{
	return (this->_rawBits);
}

void	Fixed::setRawBits(int const raw){
	if (raw != this->_rawBits)
		this->_rawBits = raw;
}

float	Fixed::toFloat(void) const{
	int	power = pow(2, this->bits);
	float	ret;
	
	ret = (float)this->_rawBits / power;
	return (ret);
}

int		Fixed::toInt(void) const{
	return (this->_rawBits >> this->bits);
}

int		pow(const int nb, const int pow_max){
	int	i = 0;
	int	ret = 1;

	while (i++ < pow_max)
		ret *= nb;
	return (ret);
}