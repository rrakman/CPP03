/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakman <rrakman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 21:57:44 by rrakman           #+#    #+#             */
/*   Updated: 2024/04/21 17:32:58 by rrakman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

int main()
{
	ClapTrap hamid("hamid");
	ClapTrap test("test");
	
	hamid.attack("test");
	test.takeDamage(2);
	hamid.beRepaired(3);
	for (int i = 0; i < 10; i++)
		hamid.attack("test");
	return 0;
}