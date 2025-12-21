/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_float.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerzone <amerzone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 11:38:25 by amerzone          #+#    #+#             */
/*   Updated: 2025/12/21 11:59:03 by amerzone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

int main()
{
	float	a = 42.42f;
	int		b;
	std::cout << "Before fixed = " << a << std::endl;
	
	a *= (1 << 8);
	b = (int)roundf(a);
	std::cout << "After fixed = " << b << std::endl;
	
	a = (float)b / (1 << 8);
	std::cout << "Re-float = " << a << std::endl;

	return 0;
}