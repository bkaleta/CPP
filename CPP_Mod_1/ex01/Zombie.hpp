/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaleta <bkaleta@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 14:39:37 by bkaleta           #+#    #+#             */
/*   Updated: 2024/12/07 15:01:05 by bkaleta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

// included libraries
#include <iostream>
#include <string>

// Classes
class Zombie
{
private:
	std::string	zombie_name;
public:
	// constructor
	Zombie(void);
	
	void	announce(void);
	void	set_name(std::string &name);
	Zombie(std::string name);
	
	// destructor
	~Zombie(void);
};

// functions
Zombie* zombieHorde(int N, std::string name);

#endif