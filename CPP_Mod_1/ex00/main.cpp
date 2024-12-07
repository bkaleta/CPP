/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaleta <bkaleta@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 02:12:26 by bkaleta           #+#    #+#             */
/*   Updated: 2024/12/07 13:23:23 by bkaleta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*dynamic;
	
	dynamic = newZombie("On Heap");
	dynamic->announce();
	randomChump("On stack");

	delete	dynamic;
	return (0);
}