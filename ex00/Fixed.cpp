/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:22:11 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/13 14:51:44 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>

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

/*Assignation operator overload*/
Fixed & Fixed::operator=( Fixed const & rightSide )
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedPoint = rightSide._fixedPoint;
	return *this;
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPoint;
}

void	Fixed::setRawBits( int const	raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPoint = raw;
}

/*Initialization for static attribut*/
const int Fixed::_decimalBits = 8;
