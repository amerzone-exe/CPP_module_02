/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerzone <amerzone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 16:35:37 by amerzone          #+#    #+#             */
/*   Updated: 2025/12/15 17:58:48 by amerzone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Integer.hpp"

Integer::Integer( int const n ) : _n(n)
{
	std::cout << "Constructor is called" << std::endl;
}

Integer::~Integer( void )
{
	std::cout << "Destructor is called with value : " << this->_n << std::endl;
}

int	Integer::getValue( void ) const
{
	return this->_n;
}

Integer&	Integer::operator=( Integer const & rhs )
{
	std::cout << "Assignation operator called from " << this->_n;
	std::cout << " to " << rhs.getValue() << std::endl;

	this->_n = rhs.getValue();

	return *this;
}

Integer		Integer::operator+( Integer const & rhs ) const
{
	std::cout << "Addition operator called from " << this->_n;
	std::cout << " to " << rhs.getValue() << std::endl;

	return ( this->_n + rhs.getValue() );
}
