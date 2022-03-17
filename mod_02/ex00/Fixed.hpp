/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 12:07:12 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/16 15:10:44 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <cctype>
#include <cstdlib>
#include <iomanip>

class Fixed
{
	private:
		int	_rawBits;
		static const int bits = 8;
	public:
		Fixed();
		Fixed(Fixed const & src);
		~Fixed();
		Fixed &	operator=(Fixed const & rhs);
	
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif