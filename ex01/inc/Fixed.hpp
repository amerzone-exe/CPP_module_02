/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:17:59 by jpiquet           #+#    #+#             */
/*   Updated: 2025/12/19 13:26:28 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int 				_a;
		static const int	_b;

	public:
		Fixed( void );
		Fixed( Fixed const & src);

		Fixed( int const n );
		Fixed( float const n );

		Fixed & operator=(Fixed const & rhs);

		int		getRawBits( void ) const;

		int		toInt( void ) const;
		float	toFloat( void ) const;

		~Fixed( void );	
};

std::ostream &	operator<<(std::ostream & os, Fixed & src);

#endif