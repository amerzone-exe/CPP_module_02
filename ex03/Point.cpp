/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocelyn <jocelyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 17:50:20 by jocelyn           #+#    #+#             */
/*   Updated: 2025/12/27 18:01:59 by jocelyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) : _x(0), _y(0)
{
}

Point::Point( const float a, const float b) : _x(a), _y(b)
{
}

Point::Point( Point const & src)
{
	*this = src;
}

Point & Point::operator=( Point const & rhs)
{
	this->_x = rhs.getXvalue();
	this->_y = rhs.getYvalue();

	return *this;
}

const Fixed	Point::getXvalue( void ) const
{
	return this->_x;
}

const Fixed	Point::getYvalue( void ) const
{
	return this->_y;
}

Point::~Point( void )
{
}
