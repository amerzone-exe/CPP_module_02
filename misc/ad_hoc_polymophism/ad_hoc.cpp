/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ad_hoc.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerzone <amerzone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 15:42:26 by amerzone          #+#    #+#             */
/*   Updated: 2025/12/15 15:57:03 by amerzone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ad_hoc.hpp"
#include <iostream>

Adhoc::Adhoc( void )
{
	std::cout << "constructor called" << std::endl;
}

Adhoc::~Adhoc( void )
{
	std::cout << "destructor called" << std::endl;
}

void	Adhoc::bar( char const c) const
{
	std::cout << "Member function bar called with char overload :" << c << std::endl;
}

void	Adhoc::bar( int const n) const
{
	std::cout << "Member function bar called with int overload :" << n << std::endl;
}

void	Adhoc::bar( float const f ) const
{
	std::cout << "Member function bar called with float overload :" << f << std::endl;	
}

void	Adhoc::bar( Adhoc const & i ) const
{
	std::cout << "Member function bar called with Adhoc overload" << std::endl;	
}
