/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcavillo <fcavillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:42:44 by fcavillo          #+#    #+#             */
/*   Updated: 2021/11/29 19:44:27 by fcavillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "phonebook.class.hpp"

/*
** define classes
*/

Phonebook::Phonebook(void)
{
	std::cout << "constructor" << std::endl;

	this->fct();
	
	return ;
}

Phonebook::~Phonebook(void)
{
	std::cout << "destructor" << std::endl;
	return ;
}

void	Phonebook::fct(void) const
{
	std::cout << "fct in phonebook class" << std::endl;
	return ;
}
