/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 16:31:33 by amerzone          #+#    #+#             */
/*   Updated: 2025/12/16 10:55:40 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTEGER_HPP
# define INTEGER_HPP
# include <iostream>

class Integer
{
	public:
		Integer( int const n );
		~Integer( void );
		
		int	getValue( void ) const;
		
		Integer &	operator=( Integer const & rhs );
		Integer		operator+( Integer const & rhs ) const;

	private:
		int _n;

};

std::ostream &	operator<<( std::ostream & o, Integer const & rhs );

#endif