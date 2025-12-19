/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:22:11 by jpiquet           #+#    #+#             */
/*   Updated: 2025/12/18 16:49:35 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>

/*Default constructor*/
Fixed::Fixed( void ) : _a(0)
{
	std::cout << "Default constructor called" << std::endl;
}

/*Default destructor*/
Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

/*Copy constructor*/
Fixed::Fixed( Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

/*Assignation operator overload*/
Fixed & Fixed::operator=( Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_a = rhs.getRawBits();
	return *this;
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_a;
}

/*Initialization for static attribut*/
const int Fixed::_b = 8;
