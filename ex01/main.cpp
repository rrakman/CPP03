/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakman <rrakman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 21:57:44 by rrakman           #+#    #+#             */
/*   Updated: 2024/04/23 01:42:34 by rrakman          ###   ########.fr       */
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
	ali.attack("REDA");
	return 0;
}