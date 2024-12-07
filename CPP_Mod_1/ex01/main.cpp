/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaleta <bkaleta@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 14:39:01 by bkaleta           #+#    #+#             */
/*   Updated: 2024/12/07 14:55:29 by bkaleta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	ZombieCount;
	int	i;
	Zombie	*horde;

	ZombieCount = 10;
	i = 0;
	horde = zombieHorde(ZombieCount, "We are LEGION!");
	
	if (horde)
	{
		while (i < ZombieCount)
		{
			horde[i].announce();
			i++;
		}
		delete [] horde;
	}
	return (0);
}