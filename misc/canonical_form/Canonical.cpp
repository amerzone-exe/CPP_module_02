/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Canonical.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 13:57:21 by jpiquet           #+#    #+#             */
/*   Updated: 2025/12/18 11:12:42 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Canonical.hpp"

Canonical::Canonical( void )
{
	std::cout << "Default constructor called" << std::endl;
}

Canonical::Canonical( int const n ) : _foo(n)
{
	std::cout << "Parametric constructor called" << std::endl;
}

Canonical::Canonical( Canonical const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Canonical::~Canonical( void )
{
	std::cout << "Destructor called" << std::endl;
}

Canonical &	Canonical::operator=(Canonical const & rhs)
{
	this->_foo = rhs.getValue();

	return *this;
}

int		Canonical::getValue( void ) const
{
	return this->_foo;
}

std::ostream &		operator<<( std::ostream & o, Canonical const & i)
{
	o << i.getValue();
	
	return o;
}
