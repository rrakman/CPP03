/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakman <rrakman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 23:55:21 by rrakman           #+#    #+#             */
/*   Updated: 2024/04/24 02:40:27 by rrakman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include"FragTrap.hpp"
#include"ScavTrap.hpp"

class DiamondTrap : public FragTrap,ScavTrap
{
    private:
        std::string name;
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap &ref);
        DiamondTrap& operator=(const DiamondTrap &ref);
        ~DiamondTrap();
};