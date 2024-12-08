/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaleta <bkaleta@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 16:01:36 by bkaleta           #+#    #+#             */
/*   Updated: 2024/12/08 02:59:20 by bkaleta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	type = "No Weapon";
}

Weapon::Weapon(std::string weaponType)
{
	type = weaponType;
}

Weapon::~Weapon()
{
}

void	Weapon::setType(std::string weaponType)
{
	type = weaponType;
}
const std::string &Weapon::getType() const
{
	return (type);
}