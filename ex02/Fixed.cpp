/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:22:11 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/08 10:21:38 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*Default constructor*/
Fixed::Fixed( void ) : _a(0)
{
}

/*Default destructor*/
Fixed::~Fixed( void )
{
}

/*Copy constructor*/
Fixed::Fixed( Fixed const & src)
{
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

/*Comparison operator overload*/
bool	Fixed::operator<(const Fixed & rhs) const
{
	if (this->_a < rhs.getRawBits())
		return true;
	else
		return false;
}

bool	Fixed::operator>(const Fixed & rhs) const
{
	if (this->_a > rhs.getRawBits())
		return true;
	else
		return false;	
}

bool	Fixed::operator<=(const Fixed & rhs) const
{
	if (this->_a <= rhs.getRawBits())
		return true;
	else
		return false;		
}

bool	Fixed::operator>=(const Fixed & rhs) const
{
	if (this->_a >= rhs.getRawBits())
		return true;
	else
		return false;		
}

bool	Fixed::operator==(const Fixed & rhs) const
{
	if (this->_a == rhs.getRawBits())
		return true;
	else
		return false;		
}

bool	Fixed::operator!=(const Fixed & rhs) const
{
	if (this->_a != rhs.getRawBits())
		return true;
	else
		return false;		
}

/*Arithmetic operator overload*/
Fixed &	Fixed::operator+(const Fixed & rhs)
{
	this->_a += rhs.getRawBits();
	return *this;
}

Fixed &	Fixed::operator-(const Fixed & rhs)
{
	this->_a -= rhs.getRawBits();
	return *this;
}

Fixed &	Fixed::operator*(const Fixed & rhs)
{
	this->_a = (this->_a * rhs.getRawBits()) / (1 << _b);
	return *this;
}

Fixed &	Fixed::operator/(const Fixed & rhs)
{
	this->_a = ((float)this->_a / (float)rhs.getRawBits()) * (1 << _b);
	return *this;
}

/*Increment / Decrement operator overload*/

/*Pre-increment*/
Fixed &	Fixed::operator++( void )
{
	this->_a += 1;
	return *this;
}

/*Pre-decrement*/
Fixed &	Fixed::operator--( void )
{
	this->_a -= 1;
	return *this;
}

/*Post-increment*/
Fixed	Fixed::operator++( int )
{
	Fixed temp = *this;
	this->_a += 1;
	return temp;
}

/*Post-decrement*/
Fixed	Fixed::operator--( int )
{
	Fixed temp = *this;
	this->_a -= 1;
	return temp;
}

/*Take two fixed points and return the smaller one*/
Fixed & Fixed::min( Fixed & a, Fixed & b)
{
	if (a < b)
		return a;
	else
		return b;
}

/*Take two const fixed points and return the smaller one*/
const Fixed & Fixed::min( const Fixed & a, const Fixed & b)
{
	if (a < b)
		return a;
	else
		return b;
}

/*Take two fixed points and return the larger one*/
Fixed & Fixed::max( Fixed & a, Fixed & b)
{
	if (a > b)
		return a;
	else
		return b;
}

/*Take two const fixed points and return the larger one*/
const Fixed & Fixed::max( const Fixed & a, const Fixed & b)
{
	if (a > b)
		return a;
	else
		return b;
}

/*Output stream operator overload*/
std::ostream &	operator<<(std::ostream & os, Fixed const & src)
{
	os << src.toFloat();
	return os;
}

/*Initialization for static attribut*/
const int Fixed::_b = 8;
