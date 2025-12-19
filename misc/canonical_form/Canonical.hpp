/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Canonical.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 11:27:53 by jpiquet           #+#    #+#             */
/*   Updated: 2025/12/18 11:12:47 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CANONICAL_HPP
# define CANONICAL_HPP

#include <iostream>

/*Class canonical form*/
class	Canonical
{
	public:
		Canonical( void ); //Default constructor
		Canonical( int const n );
		Canonical( Canonical const & rhs ); //Copy constructor
		~Canonical( void ); //Default destructor

		Canonical &	operator=( Canonical const & rhs ); //Assignation operator overload

		int		getValue( void ) const;

	private:

		int		_foo;
};

std::ostream &		operator<<( std::ostream & o, Canonical const & i);

#endif