/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:24:08 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/17 17:34:40 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// CONSTRUCTORS
Fixed::Fixed() : _rawBits(0){
}

Fixed::Fixed(Fixed const & src){
	*this = src;
}

Fixed::Fixed(const int i){
	this->_rawBits = i << this->bits;
}

Fixed::Fixed(const float f){
	int	power = pow(2, this->bits);

	this->_rawBits = roundf(f * power);
}


// CANON FORM SIDES 
Fixed::~Fixed(){
}

Fixed &	Fixed::operator=(Fixed const & rhs){
	if (this != &rhs)
		this->_rawBits = rhs.getRawBits();
	return (*this);
}


// OPERATORS FUNCTIONS
std::ostream & operator<<(std::ostream & o, Fixed const & rhs){
	o << rhs.toFloat();
	return (o);
}

Fixed Fixed::operator+(Fixed const & rhs) const{
	Fixed	tmp;

	tmp.setRawBits(this->_rawBits + rhs.getRawBits());
	return (tmp);
}

Fixed Fixed::operator-(Fixed const & rhs) const{
	Fixed	tmp;

	tmp.setRawBits(this->_rawBits - rhs.getRawBits());
	return (tmp);
}

Fixed Fixed::operator*(Fixed const & rhs) const{
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const & rhs) const{
	return Fixed(this->toFloat() / rhs.toFloat());
}

bool	Fixed::operator>(Fixed const & rhs) const{
	return(this->_rawBits > rhs.getRawBits());
}

bool	Fixed::operator<(Fixed const & rhs) const{
	return(this->_rawBits < rhs.getRawBits());
}

bool	Fixed::operator==(Fixed const & rhs) const{
	return(this->_rawBits == rhs.getRawBits());
}

bool	Fixed::operator!=(Fixed const & rhs) const{
	return(this->_rawBits != rhs.getRawBits());
}

bool	Fixed::operator>=(Fixed const & rhs) const{
	return(this->_rawBits >= rhs.getRawBits());
}

bool	Fixed::operator<=(Fixed const & rhs) const{
	return(this->_rawBits <= rhs.getRawBits());
}

Fixed	& Fixed::operator++(void){
	this->_rawBits++;
	return (*this);
}

Fixed	& Fixed::operator--(void){
	this->_rawBits--;
	return (*this);
}

Fixed Fixed::operator++(int){
	Fixed	save(*this);
	++(*this);
	return (save);
}

Fixed Fixed::operator--(int){
	Fixed	save(*this);
	--(*this);
	return (save);
}

Fixed & Fixed::min(Fixed & rawbits1, Fixed & rawbits2){
	if (rawbits1 < rawbits2)
		return (rawbits1);
	return (rawbits2);
}

const Fixed & Fixed::min(const Fixed & rawbits1, const Fixed & rawbits2){
	if (rawbits1 < rawbits2)
		return (rawbits1);
	return (rawbits2);
}

Fixed & Fixed::max(Fixed & rawbits1, Fixed & rawbits2){
	if (rawbits1 > rawbits2)
		return (rawbits1);
	return (rawbits2);
}

const Fixed & Fixed::max(const Fixed & rawbits1, const Fixed & rawbits2){
	if (rawbits1 > rawbits2)
		return (rawbits1);
	return (rawbits2);
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