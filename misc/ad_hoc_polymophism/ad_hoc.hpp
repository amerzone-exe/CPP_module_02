/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ad_hoc.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerzone <amerzone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 15:15:00 by amerzone          #+#    #+#             */
/*   Updated: 2025/12/15 15:43:56 by amerzone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AD_HOC_H
# define AD_HOC_H

class Adhoc 
{
		public :
		Adhoc( void );
		~Adhoc ( void );

		void	bar( char const c) const;
		void	bar( int const n) const;
		void	bar( float const f ) const;
		void	bar( Adhoc const & i ) const;
};

#endif