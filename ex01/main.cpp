/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcavillo <fcavillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 17:25:38 by fcavillo          #+#    #+#             */
/*   Updated: 2021/11/30 17:50:57 by fcavillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "phonebook.class.hpp"

int main(void)
{
	Phonebook	phonebook;
	std::string	input;
	int			nb = 1;

	while(std::cin.eof() == 0)
	{
		std::cout << "Enter a command (ADD, EXIT, SEARCH) :" << std::endl;
		std::cin >> input;
		if (nb == 9)
			nb = 1;
		if (input == "ADD")
		{
			phonebook.add(nb);
			nb++;
		}	
		else if (input == "SEARCH")
			phonebook.search();
		else if (input == "EXIT")
			break;
		else
			std::cout << "Unknown command" << std::endl;
	}
	return (0);
}