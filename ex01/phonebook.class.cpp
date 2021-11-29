/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcavillo <fcavillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:42:44 by fcavillo          #+#    #+#             */
/*   Updated: 2021/11/30 00:02:04 by fcavillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "phonebook.class.hpp"

//index 0 broken

Phonebook::Phonebook(void)
{
	this->nb_contacts = 0;
	return ;
}

Phonebook::~Phonebook(void)
{
	return ;
}

void	Phonebook::add(int nb)
{
	this->contacts[nb].fill_info(nb);
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
	while (i < this->nb_contacts)
	{
		this->contacts[i].print_list();
		i++;
	}
	while (1)
	{
		std::cout << "Enter the contact index to see the info" << std::endl;
		std::cin >> i;
		if (std::cin.eof())
			return ;		
		else if (std::cin.good() && i > 0 && i < this->nb_contacts)
		{
			this->contacts[i].print_contact();
			return ;
		}
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}
