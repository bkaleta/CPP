/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaleta <bkaleta@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 16:01:36 by bkaleta           #+#    #+#             */
/*   Updated: 2024/12/07 16:09:35 by bkaleta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	type = "empty hand";
}

Weapon::Weapon(std::string t)
{
	type = t;
}

Weapon::~Weapon()
{
}

void	Weapon::setType(std::string t)
{
	type = t;
}
const std::string &Weapon::getType() const
{
	return (type);
}