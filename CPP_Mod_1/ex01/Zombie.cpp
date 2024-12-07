/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaleta <bkaleta@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 14:39:33 by bkaleta           #+#    #+#             */
/*   Updated: 2024/12/07 15:00:53 by bkaleta          ###   ########.fr       */
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
	std::cout << zombie_name << " died" << std::endl;
}

void Zombie::set_name(std::string &name)
{
	zombie_name = name;
}

void Zombie::announce(void)
{
	std::cout << zombie_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}