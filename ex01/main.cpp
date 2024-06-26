/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakman <rrakman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 21:57:44 by rrakman           #+#    #+#             */
/*   Updated: 2024/04/23 15:34:23 by rrakman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"
#include"ScavTrap.hpp"

int main()
{
	ClapTrap first_robot("REDA");
	ScavTrap ali("ALI");
	ali.takeDamage(10);
	ali.guardGate();
	ali.beRepaired(20);
	for (int i = 0; i <=10; i++)
	{
		ali.attack("REDA");
		first_robot.takeDamage(4);
	}
	return 0;
}