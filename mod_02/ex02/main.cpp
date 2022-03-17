/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:24:40 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/17 17:38:54 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;

    std::cout << "MORE TESTS :" << std::endl;
    a = 10;
    std::cout << "a = " << a << "   |   b = " << b << std::endl;
    std::cout << "a > b ?\n" << (a > b) << std::endl;
    std::cout << "a < b ?\n" << (a < b) << std::endl;
    a = 11;
    std::cout << "a new value : " << a << std::endl;
    std::cout << "a >= b ?\n" << (a >= b) << std::endl;
    std::cout << "a <= b ?\n" << (a <= b) << std::endl;
    std::cout << "a == b ?\n" << (a == b) << std::endl;
    a = b;
    std::cout << "a new value : " << a << std::endl;
    std::cout << "a == b ?\n" << (a == b) << std::endl;
    std::cout << "a != b ?\n" << (a != b) << std::endl;
    return 0;
}