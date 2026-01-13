/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:22:11 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/13 15:47:56 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*Default constructor*/
Fixed::Fixed( void ) : _fixedPoint(0)
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
	this->_fixedPoint = n << _decimalBits;
}

/*convert an float to a the fixed point number*/
Fixed::Fixed( float const n )
{
	this->_fixedPoint = roundf(n * (1 << _decimalBits));
}

/*Assignation operator overload*/
Fixed & Fixed::operator=( Fixed const & rightSide)
{
	this->_fixedPoint = rightSide._fixedPoint;
	return *this;
}

int	Fixed::getRawBits( void ) const
{
	return this->_fixedPoint;
}

void	Fixed::setRawBits( int	const raw)
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

/*Comparison operator overload*/
bool	Fixed::operator<(const Fixed & rightSide) const
{
	if (this->_fixedPoint < rightSide._fixedPoint)
		return true;
	else
		return false;
}

bool	Fixed::operator>(const Fixed & rightSide) const
{
	if (this->_fixedPoint > rightSide._fixedPoint)
		return true;
	else
		return false;
}

bool	Fixed::operator<=(const Fixed & rightSide) const
{
	if (this->_fixedPoint <= rightSide._fixedPoint)
		return true;
	else
		return false;
}

bool	Fixed::operator>=(const Fixed & rightSide) const
{
	if (this->_fixedPoint >= rightSide._fixedPoint)
		return true;
	else
		return false;
}

bool	Fixed::operator==(const Fixed & rightSide) const
{
	if (this->_fixedPoint == rightSide._fixedPoint)
		return true;
	else
		return false;
}

bool	Fixed::operator!=(const Fixed & rightSide) const
{
	if (this->_fixedPoint != rightSide._fixedPoint)
		return true;
	else
		return false;
}

/*Arithmetic operator overload*/
Fixed	Fixed::operator+(const Fixed & rightSide)
{
	Fixed	temp;

	long res = static_cast<long>(this->_fixedPoint) + static_cast<long>(rightSide._fixedPoint);
	temp._fixedPoint = res;

	return temp;
}

Fixed	Fixed::operator-(const Fixed & rightSide)
{
	Fixed	temp;

	temp._fixedPoint = this->_fixedPoint - rightSide._fixedPoint;
	return temp;
}

Fixed	Fixed::operator*(const Fixed & rightSide)
{
	Fixed temp;

	long res = ((static_cast<long>(this->_fixedPoint) * static_cast<long>(rightSide._fixedPoint))) / (1 << _decimalBits);
	temp._fixedPoint = res;

	return temp;
}

Fixed	Fixed::operator/(const Fixed & rightSide)
{
	Fixed	temp;

	temp._fixedPoint = ((static_cast<float>(this->_fixedPoint) / static_cast<float>(rightSide._fixedPoint))) * (1 << _decimalBits);
	return temp;
}

/*Increment / Decrement operator overload*/

/*Pre-increment*/
Fixed &	Fixed::operator++( void )
{
	this->_fixedPoint += 1;
	return *this;
}

/*Pre-decrement*/
Fixed &	Fixed::operator--( void )
{
	this->_fixedPoint -= 1;
	return *this;
}

/*Post-increment*/
Fixed	Fixed::operator++( int )
{
	Fixed temp = *this;
	this->_fixedPoint += 1;
	return temp;
}

/*Post-decrement*/
Fixed	Fixed::operator--( int )
{
	Fixed temp = *this;
	this->_fixedPoint -= 1;
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
const int Fixed::_decimalBits = 8;
