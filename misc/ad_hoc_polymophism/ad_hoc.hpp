/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ad_hoc.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 15:15:00 by amerzone          #+#    #+#             */
/*   Updated: 2025/12/16 11:10:09 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AD_HOC_H
# define AD_HOC_H

/*Le polymophisme nous permet d'utiliser plusieurs focntions avec le même nom
mais qui est definie par les paramètres qu'elles prennent*/

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