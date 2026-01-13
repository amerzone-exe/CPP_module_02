/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:17:59 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/12 15:12:03 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int 				_fixedPoint;
		static const int	_decimalBits;

	public:
		Fixed( void );
		Fixed( Fixed const & src );
		Fixed & operator=( Fixed const & rightSide );
		~Fixed( void );	

		int		getRawBits( void ) const;
		void	setRawBits( int	const	raw );

};

#endif