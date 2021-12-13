/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcavillo <fcavillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:42:44 by fcavillo          #+#    #+#             */
/*   Updated: 2021/12/13 11:42:44 by fcavillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

/*
**	class definitions should be in the .cpp
**	constructor and destructor are defined here
*/

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
	std::cout << std::setw(10) << "index" << " | ";
	std::cout << std::setw(10) << "first_name" << " | ";
	std::cout << std::setw(10) << "last_name" << " | ";
	std::cout << std::setw(10) << "nickname" << " | ";
	std::cout << std::endl;
	return ;
}

void	Phonebook::add(int nb)
{
	this->contacts[nb - 1].setInfo(nb);
	if (this->nb_contacts < 8)
		nb_contacts++;
	return ;
}

/*
**	if the user inputs a random value presses enter, the loop would never end since it would display and endl,
**	triggering the end of the ::cin, then loop, then trigger, etc.
**	std::cin.clear() clears the input stream for any error flag, makes it ready for input again
**	std::cin.ignore() ignores any character in the input until next \n (included)
*/

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
		if (std::cin.good() && i > 0 && i <= this->nb_contacts)
		{
			this->contacts[i - 1].getInfo();
			return ;
		}
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}
