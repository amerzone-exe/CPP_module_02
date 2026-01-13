/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 10:57:27 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/13 14:46:07 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) 
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c(1000000);
	Fixed d(1000000);

	Fixed e(8388607);

	std::cout << "Print e " << e << std::endl;

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	
	a = c + d;
	std::cout << "a = " << a << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "--c = " << --c << std::endl;

	a = 10000;
	d = 100;
	c = ((a - (d * b)) / d) * b;
	std::cout << "c = " << c << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a, c ) << std::endl;

	if (a < b)
		std::cout << "a is smaller than b" << std::endl;
	if (b > a)
		std::cout << "b is greater than a" << std::endl;

	return 0;
}
