/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaleta <bkaleta@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:41:58 by bkaleta           #+#    #+#             */
/*   Updated: 2024/11/26 15:01:26 by bkaleta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <cstdlib>
#include <string>
#include <unistd.h>
#include <iomanip>
#include <sstream>
#include <limits>
#include "Contact.hpp"

class PhoneBook 
{
	// Atrybuty 
	private:
		Contact	array_of_contacts[8];
		int		index;
		int		size;

		std::string truncate(const std::string &text, size_t width) const;
	public:
		//Konstruktor
		PhoneBook();
		// Metody
		void	add();
		void	search() const;
		void	exit();
};

#endif 