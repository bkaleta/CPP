/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaleta <bkaleta@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 02:17:09 by bkaleta           #+#    #+#             */
/*   Updated: 2024/12/07 03:35:04 by bkaleta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	zombie_name = "No Name";
}

Zombie::Zombie(std::string name)
{
	set_name(name);
}

Zombie::~Zombie(void)
{
	std::cout << zombie_name << "died" << std::endl;
}

void Zombie::set_name(std::string name)
{
	zombie_name = name;
}

void Zombie::announce(void)
{
	std::cout << zombie_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}