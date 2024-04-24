/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakman <rrakman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 23:55:18 by rrakman           #+#    #+#             */
/*   Updated: 2024/04/24 02:48:55 by rrakman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout<<"DiamondTrap Default constructor called"<<std::endl;
	name = "Default DiamondTrap";
	hitPoint = 100;
	energyPoint = 50;
	attackDamage = 30;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
    this->name = name;
    ClapTrap::name = name + "_clap_name";
    hitPoint = 100;
    energyPoint = 50;
    attackDamage = 30;
	std::cout<<"DiamondTrap constructed named: "<<name<<std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout<<"DiamondTrap Destructor called"<<std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &ref)
{
    *this = ref;
	std::cout<<"DiamondTrap Copy constructor called"<<std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &ref)
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
