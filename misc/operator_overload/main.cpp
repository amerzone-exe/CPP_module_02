/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 17:59:07 by amerzone          #+#    #+#             */
/*   Updated: 2025/12/16 11:07:06 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Integer.hpp"

int main( void )
{
	Integer x(5);
	Integer y(6);
	Integer z(6);

	std::cout << "Value of x : " << x << std::endl;
	std::cout << "Value of y : " << y << std::endl;
	y = Integer( 12 );
	std::cout << "Value of y = " << y << std::endl;
	
	std::cout << "Value of z = " << z << std::endl;
	z = x + y;
	std::cout << "Value of z = " << z << std::endl;

	return 0;
}

// int main( void )
// {
// 	Integer bar(5);
// 	Integer foo(6);

// 	bar = bar + foo;
	
// 	bar = foo;

// 	return 0;
// }
