/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcavillo <fcavillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 17:25:38 by fcavillo          #+#    #+#             */
/*   Updated: 2021/11/29 17:26:47 by fcavillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "phonebook.class.hpp"

/*
** create an instance book of the class Phonebook
*/

int main(void)
{
	Phonebook	book(7);
	
	book.fct();
	std::cout << book.i << std::endl;
	return (0);
}