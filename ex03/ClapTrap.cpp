/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakman <rrakman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 21:57:42 by rrakman           #+#    #+#             */
/*   Updated: 2024/04/21 17:19:23 by rrakman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout<<"ClapTrap Default constructor called"<<std::endl;
	this->name = "Default ClapTrap";
	hitPoint = 10;
	energyPoint = 10;
	attackDamage = 0;
}
ClapTrap::~ClapTrap()
{
	std::cout<<"ClapTrap Destructor called"<<std::endl;
}
ClapTrap::ClapTrap(std::string name): name(name),hitPoint(10),energyPoint(10),attackDamage(0)
{
	std::cout<<"ClapTrap constructed named: "<<name<<std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &ref)
{
	if(this != &ref)
	{
		this->name = ref.name;
		this->hitPoint = ref.hitPoint;
		this->energyPoint = ref.energyPoint;
		this->attackDamage = ref.attackDamage;
	}
	std::cout<<"Copy assignment operator called"<<std::endl;
	return *this;
}

ClapTrap::ClapTrap(const ClapTrap &ref)
{
	*this = ref;
	std::cout<<"ClapTrap Copy constructor called"<<std::endl;
	return;
}

void ClapTrap::attack(const std::string& target)
{	
	if(energyPoint <= 0)
		std::cout<<"ClapTrap "<<name<<" have no energy Point"<<std::endl;
	else
	{
		std::cout<<"ClapTrap "<<name<<" attacks "<<target<<", causing "<<attackDamage<<" points of damage!"<<std::endl;
		energyPoint--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if(amount >= hitPoint)
	{
		std::cout<<"ClapTrap "<<name<<" is dead"<<std::endl;
		hitPoint = 0;
	}
	else
	{
		std::cout<<"ClapTrap "<<name<<" has taken "<<amount<<" of damage!"<<std::endl;
		hitPoint -= amount;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(energyPoint <= 0)
		std::cout<<"ClapTrap "<<name<<" have no energy Point, So can't be repaired"<<std::endl;
	else
	{
		hitPoint += amount;
		energyPoint--;
		std::cout<<"ClapTrap "<<name<<" has repaired himself +"<<amount<<" of hitPoint back!"<<std::endl;
	}
}