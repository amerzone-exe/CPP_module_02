/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocelyn <jocelyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 17:41:38 by jocelyn           #+#    #+#             */
/*   Updated: 2025/12/27 18:02:16 by jocelyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class	Point
{
	private:
		const Fixed _x;
		const Fixed _y;
	
	public:
		Point( void );
		Point( const float a, const float b );

		Point( Point const & src );
		Point & operator=(Point const & rhs);

		const Fixed getXvalue( void ) const;
		const Fixed getYvalue( void ) const;

		~Point( void );
};

#endif