/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 16:35:37 by amerzone          #+#    #+#             */
/*   Updated: 2025/12/16 11:03:50 by jpiquet          ###   ########.fr       */
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

/*Cette surcharge permet d'ecrire quelque chose comme :
a = b où 'a' est notre instance, '=' est notre fonction et 'b' notre parametre*/
Integer&	Integer::operator=( Integer const & rhs )
{
	std::cout << "Assignation operator called from " << this->_n;
	std::cout << " to " << rhs.getValue() << std::endl;

	this->_n = rhs.getValue();

	return *this;
}

/*Cette surcharge permet d'ecrire quelque chose comme :
a + b où 'a' est notre instance, '+' est notre fonction et 'b' notre parametre*/
Integer		Integer::operator+( Integer const & rhs ) const
{
	std::cout << "Addition operator called from " << this->_n;
	std::cout << " to " << rhs.getValue() << std::endl;

	return ( this->_n + rhs.getValue() );
}

/*Le but de cette surcharge est de permettre d'afficher la value de ma classe
directement en utilisant ma classe integer, par exemple en écrivant :
std::cout << rhs << std::endl cela va nous afficher la value de rhs._n */
std::ostream &	operator<<( std::ostream & o, Integer const & rhs )
{
	o << rhs.getValue();
	return o;
}