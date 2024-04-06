/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakman <rrakman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 21:57:39 by rrakman           #+#    #+#             */
/*   Updated: 2024/04/06 20:20:49 by rrakman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<iostream>

class ClapTrap
{
	private:
		std::string name;
		unsigned int health;
		unsigned int energyPoint;
		unsigned int attackDamage;
	public:
		void attack(const std::string& target);
};