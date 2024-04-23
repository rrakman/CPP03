/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakman <rrakman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 22:17:12 by rrakman           #+#    #+#             */
/*   Updated: 2024/04/23 01:55:48 by rrakman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout<<"ScavTrap Default constructor called"<<std::endl;
	name = "Default ScavTrap";
	hitPoint = 100;
	energyPoint = 50;
	attackDamage = 20;
}
ScavTrap::~ScavTrap()
{
	std::cout<<"ScavTrap Destructor called"<<std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout<<"ScavTrap constructed named: "<<name<<std::endl;
	this->name = name;
	hitPoint = 100;
	energyPoint = 50;
	attackDamage = 20;
}
ScavTrap::ScavTrap(const ScavTrap &ref)
{
	*this = ref;
	std::cout<<"ScavTrap Copy constructor called"<<std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &ref)
{
	if(this != &ref)
	{
		name = ref.name;
		hitPoint = ref.hitPoint;
		energyPoint = ref.energyPoint;
		attackDamage = ref.attackDamage;
	}
	std::cout<<"Copy assignment operator called"<<std::endl;
	return *this;
}

void ScavTrap::attack(const std::string& target)
{
	if(energyPoint <= 0)
		std::cout<<"ScavTrap "<<name<<" have no energy Point"<<std::endl;
	else
	{
		std::cout<<"ScavTrap "<<name<<" attacks "<<target<<", causing "<<attackDamage<<" points of damage!"<<std::endl;
		energyPoint--;
	}
}

void ScavTrap::guardGate()
{
	std::cout<<"ScavTrap is now in Gate keeper mode"<<std::endl;
}