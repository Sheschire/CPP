/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:24:22 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/17 17:31:15 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int	_rawBits;
		static const int bits = 8;
	public:
		Fixed();
		Fixed(Fixed const & src);
		Fixed(const int i);
		Fixed(const float f);
		~Fixed();
		Fixed &	operator=(Fixed const & rhs);
	
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	bool operator>(Fixed const & rhs) const;
	bool operator<(Fixed const & rhs) const;
	bool operator==(Fixed const & rhs) const;
	bool operator>=(Fixed const & rhs) const;
	bool operator<=(Fixed const & rhs) const;
	bool operator!=(Fixed const & rhs) const;
	Fixed operator+(Fixed const & rhs) const;
	Fixed operator-(Fixed const & rhs) const;
	Fixed operator*(Fixed const & rhs) const;
	Fixed operator/(Fixed const & rhs) const;
	Fixed & operator++(void);
	Fixed & operator--(void);
	Fixed operator++(int);
	Fixed operator--(int);

	static Fixed & min(Fixed & rawbits1, Fixed & rawbits2);
	static const Fixed & min(const Fixed & rawbits1, const Fixed & rawbits2);
	static Fixed & max(Fixed & rawbits1, Fixed & rawbits2);
	static const Fixed & max(const Fixed & rawbits1, const Fixed & rawbits2);
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);
int	pow(const int nb, const int pow_max);

#endif