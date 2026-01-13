/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:22:11 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/13 15:00:25 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*Default constructor*/
Fixed::Fixed( void ) : _fixedPoint(0)
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
	this->_fixedPoint = n << _decimalBits;
}

/*convert an float to a the fixed point number*/
Fixed::Fixed( float const n )
{
	this->_fixedPoint = roundf(n * (1 << _decimalBits));
}

/*Assignation operator overload*/
Fixed & Fixed::operator=( Fixed const &	rightSide)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedPoint = rightSide._fixedPoint;
	return *this;
}

/*Setter & getter*/
int	Fixed::getRawBits( void ) const
{
	return this->_fixedPoint;
}

void	Fixed::setRawBits( int const	raw )
{
	this->_fixedPoint = raw;
}

float	Fixed::toFloat( void ) const
{
	float	converted;
	converted = static_cast<float>(this->_fixedPoint) / static_cast<float>(1 << _decimalBits);
	return converted;
}

int		Fixed::toInt( void ) const
{
	int	converted;
	converted = this->_fixedPoint >> _decimalBits;
	return converted;
}

std::ostream &	operator<<( std::ostream & os, Fixed const & src )
{
	os << src.toFloat();
	return os;
}

/*Initialization for static attribut*/
const int Fixed::_decimalBits = 8;
