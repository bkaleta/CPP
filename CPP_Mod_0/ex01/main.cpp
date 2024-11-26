/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaleta <bkaleta@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:41:52 by bkaleta           #+#    #+#             */
/*   Updated: 2024/11/26 15:31:17 by bkaleta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	phonebook;
	std::string		input;

	std::cout << "Welcome to the 80s crappy awesome phonebook software." << std::endl;
	std::cout << "_____________________________________________________" << std::endl;
	std::cout << "Type one of the three following command" << std::endl;
	std::cout << "1. ADD | 2. SEARCH | 3. EXIT : ";	
	while (1)
	{
		std::cin >> input;
		
		if (input == "ADD" || input == "1")
		{
			phonebook.add();
			std::cout << std::endl << "Type one of the three following command" << std::endl;
			std::cout << "1. ADD | 2. SEARCH | 3. EXIT : ";	
		}
		else if (input == "SEARCH" || input == "2")
		{
			phonebook.search();
			std::cout << std::endl << "Type one of the three following command" << std::endl;
			std::cout << "1. ADD | 2. SEARCH | 3. EXIT : ";		
		}
		else if (input == "EXIT" || input == "3")
		{
			phonebook.exit();
			return (0);
		}
		else
		{
			std::cout << std::endl << "Wrong input, try ADD, SEARCH or EXIT" << ": ";
		}
	}
}