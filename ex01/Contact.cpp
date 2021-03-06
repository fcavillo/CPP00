/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcavillo <fcavillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:38:14 by fcavillo          #+#    #+#             */
/*   Updated: 2021/12/13 11:29:38 by fcavillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

std::string	fields[5] =
{
	"first_name",
	"last_name",
	"nickname",
	"phone_number",
	"darkest_secret"
};

void    Contact::setInfo(int nb)
{
	int	i = 0;

	std::cout << "Type contact information, without space" << std::endl;
	while (i < 5)
	{
		this->nb = nb;
		std::cout << fields[i] << " :\t";
		if (fields[i].size() + 2 < 16)
			std::cout << "\t";
		std::cin >> this->info[i];
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		i++;
	}
}

void	Contact::print_list(void)
{
	int	i = 0;

	std::cout << std::setw(10) << this->nb << " | ";
	while (i < 3)
	{
		if (info[i].size() <= 10)
			std::cout << std::setw(10) << info[i];
		else
			std::cout << std::setw(9) << info[i].substr(0, 9) << ".";
		i++;
		std::cout << " | ";
	}
	std::cout << std::endl;
}

void	Contact::getInfo(void)
{
	int	i = 0;

	while (i < 5)
	{
		std::cout << fields[i] << " :\t";
		if (fields[i].size() + 2 < 16)
			std::cout << "\t";
		std::cout << this->info[i] << std::endl;
		i++;
	}
}