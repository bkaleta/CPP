/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaleta <bkaleta@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 03:03:04 by bkaleta           #+#    #+#             */
/*   Updated: 2024/12/08 03:06:03 by bkaleta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	std::string	humanNameB;
	Weapon		*humanWeaponB;
public:
	HumanB(std::string name);
	~HumanB(void);
	void	attack();
	void	setWeapon(Weapon &weapon);
};


#endif