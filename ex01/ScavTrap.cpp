/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakman <rrakman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 22:17:12 by rrakman           #+#    #+#             */
/*   Updated: 2024/04/22 22:20:16 by rrakman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout<<"ScavTrap Default constructor called"<<std::endl;
	this->name = "Default ScavTrap";
	this->hitPoint = 100;
	this->energyPoint = 10;
	this->attackDamage = 0;
}
ScavTrap::~ScavTrap()
{
	std::cout<<"ScavTrap Destructor called"<<std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	std::cout<<name<<std::endl;
}

