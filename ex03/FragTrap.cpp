/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakman <rrakman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:40:05 by rrakman           #+#    #+#             */
/*   Updated: 2024/04/23 18:44:32 by rrakman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout<<"FragTrap Default constructor called"<<std::endl;
	name = "Default FragTrap";
	hitPoint = 100;
	energyPoint = 100;
	attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->name = name;
    hitPoint = 100;
    energyPoint = 100;
    attackDamage = 30;
	std::cout<<"FragTrap constructed named: "<<name<<std::endl;
}

FragTrap::~FragTrap()
{
    std::cout<<"FragTrap Destructor constructor called"<<std::endl;
}

FragTrap::FragTrap(const FragTrap &ref)
{
    *this = ref;
	std::cout<<"FragTrap Copy constructor called"<<std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &ref)
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

void FragTrap::highFivesguys(void)
{
    std::cout<<"FragTrap: " <<name<<" is waving his hands 👋"<<std::endl;
}
