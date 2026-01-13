/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:17:59 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/13 11:22:36 by jpiquet          ###   ########.fr       */
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

		Fixed & operator=(Fixed const & rightSide);

		int		getRawBits( void ) const;
		void	setRawBits( int	const	raw );

		int		toInt( void ) const;
		float	toFloat( void ) const;

		/*Comparison operator*/
		bool	operator<(const Fixed & rightSide) const ;
		bool	operator>(const Fixed & rightSide) const ;
		bool	operator<=(const Fixed & rightSide) const ;
		bool	operator>=(const Fixed & rightSide) const ;
		bool	operator==(const Fixed & rightSide) const ;
		bool	operator!=(const Fixed & rightSide) const ;

		/*Arithmetic operator*/
		Fixed	operator+(const Fixed & rightSide);
		Fixed	operator-(const Fixed & rightSide);
		Fixed	operator*(const Fixed & rightSide);
		Fixed	operator/(const Fixed & rightSide);

		/*Increment/decrement operator*/
		/*Pre*/
		Fixed &	operator++( void );
		Fixed &	operator--( void );
		/*Post*/
		Fixed	operator++( int );
		Fixed	operator--( int );

		static Fixed & min( Fixed & a, Fixed & b);
		static Fixed & max( Fixed & a, Fixed & b);
		static const Fixed & min( const Fixed & a, const Fixed & b);
		static const Fixed & max( const Fixed & a, const Fixed & b);

		~Fixed( void );	
};

std::ostream &	operator<<(std::ostream & os, const Fixed & src);

#endif