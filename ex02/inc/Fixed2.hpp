/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed2.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerzone <amerzone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:17:59 by jpiquet           #+#    #+#             */
/*   Updated: 2025/12/21 13:02:30 by amerzone         ###   ########.fr       */
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

		Fixed & operator=(Fixed const & rhs);

		int		getRawBits( void ) const;

		int		toInt( void ) const;
		float	toFloat( void ) const;

		/*Comparison operator*/
		bool	operator<(const Fixed & rhs);
		bool	operator>(const Fixed & rhs);
		bool	operator<=(const Fixed & rhs);
		bool	operator>=(const Fixed & rhs);
		bool	operator==(const Fixed & rhs);
		bool	operator!=(const Fixed & rhs);

		/*Arithmetic operator*/
		int &	operator+(const Fixed & rhs);
		int &	operator-(const Fixed & rhs);
		int &	operator*(const Fixed & rhs);
		int &	operator/(const Fixed & rhs);

		/*Increment/decrement operator*/
		int &	operator++(const Fixed & rhs);
		int &	operator--(const Fixed & rhs);
		int &	operator++(const Fixed & rhs);
		int &	operator--(const Fixed & rhs);


		~Fixed( void );	
};

std::ostream &	operator<<(std::ostream & os, const Fixed & src);

#endif