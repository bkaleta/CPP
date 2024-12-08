/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaleta <bkaleta@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 03:04:00 by bkaleta           #+#    #+#             */
/*   Updated: 2024/12/08 03:16:38 by bkaleta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	humanNameB = name;
	humanWeaponB = nullptr;
}

HumanB::~HumanB(void)
{
	return ;
}

void	HumanB::attack(void)
{
	std::cout << humanNameB << " attacks with their " << humanWeaponB->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	humanWeaponB = &weapon;
}