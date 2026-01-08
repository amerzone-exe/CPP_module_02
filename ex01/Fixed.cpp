/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:22:11 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/05 13:30:28 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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

/*convert an int to a the fixed point number*/
Fixed::Fixed( int const n )
{
	this->_a = n << _b;
}

/*convert an float to a the fixed point number*/
Fixed::Fixed( float const n )
{
	this->_a = roundf(n * (1 << _b));
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
	return this->_a;
}

float	Fixed::toFloat( void ) const
{
	float	converted;
	converted = (float)this->_a / (1 << _b);
	return converted;
}

int		Fixed::toInt( void ) const
{
	int	converted;
	converted = this->_a >> _b;
	return converted;
}

std::ostream &	operator<<(std::ostream & os, Fixed const & src)
{
	os << src.toFloat();
	return os;
}

/*Initialization for static attribut*/
const int Fixed::_b = 8;
