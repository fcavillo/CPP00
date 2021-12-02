/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcavillo <fcavillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:42:44 by fcavillo          #+#    #+#             */
/*   Updated: 2021/11/30 18:23:49 by fcavillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "phonebook.class.hpp"

Phonebook::Phonebook(void)
{
	this->nb_contacts = 0;
	return ;
}

Phonebook::~Phonebook(void)
{
	return ;
}

void	Phonebook::print_header(void)
{
	int	i = 0;

	std::cout << std::setw(10) << "index" << " | ";
	std::cout << std::setw(10) << "first_name" << " | ";
	std::cout << std::setw(10) << "last_name" << " | ";
	std::cout << std::setw(10) << "nickname" << " | ";
	std::cout << std::endl;
	return ;
}

void	Phonebook::add(int nb)
{
	this->contacts[nb - 1].fill_info(nb);
	if (this->nb_contacts < 8)
		nb_contacts++;
	return ;
}

void	Phonebook::search(void)
{
	int	i = 0;

	if (this->nb_contacts == 0)
	{
		std::cout << "Phonebook is empty" << std::endl;
		return ;
	}
	print_header();
	while (i < this->nb_contacts)
	{
		this->contacts[i].print_list();
		i++;
	}
	while (1)
	{
		std::cout << "Enter the contact index to see the number" << std::endl;
		std::cin >> i;
		if (std::cin.eof())
			return ;		
		else if (std::cin.good() && i > 0 && i <= this->nb_contacts)
		{
			this->contacts[i - 1].print_contact();
			return ;
		}
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}
