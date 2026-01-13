/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:17:59 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/12 15:24:20 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int 				_fixedPoint;
		static const int	_decimalBits;

	public:
		Fixed( void );
		Fixed( Fixed const & src);

		Fixed( int const n );
		Fixed( float const n );

		Fixed & operator=( Fixed const & rightSide );

		int		getRawBits( void ) const;
		void	setRawBits( int	const	raw );

		int		toInt( void ) const;
		float	toFloat( void ) const;

		~Fixed( void );
};

std::ostream &	operator<<(std::ostream & os, const Fixed & src);

#endif