/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocelyn <jocelyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:17:59 by jpiquet           #+#    #+#             */
/*   Updated: 2025/12/27 18:16:47 by jocelyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

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

		const Fixed & operator=(Fixed const & rhs);

		int		getRawBits( void ) const;

		int		toInt( void ) const;
		float	toFloat( void ) const;

		/*Comparison operator*/
		bool	operator<(const Fixed & rhs) const ;
		bool	operator>(const Fixed & rhs) const ;
		bool	operator<=(const Fixed & rhs) const ;
		bool	operator>=(const Fixed & rhs) const ;
		bool	operator==(const Fixed & rhs) const ;
		bool	operator!=(const Fixed & rhs) const ;

		/*Arithmetic operator*/
		Fixed &	operator+(const Fixed & rhs);
		Fixed &	operator-(const Fixed & rhs);
		Fixed &	operator*(const Fixed & rhs);
		Fixed &	operator/(const Fixed & rhs);

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