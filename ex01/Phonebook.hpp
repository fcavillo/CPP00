/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcavillo <fcavillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 16:31:22 by fcavillo          #+#    #+#             */
/*   Updated: 2021/12/09 11:36:05 by fcavillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <cstring>
#include <limits>
#include "Contact.hpp"

/*
**	class declarations should be in the .hpp
**	the constructor and destructor are public
**	the contacts array is private but accessible through public functions in the class
*/

class Phonebook
{
	public:
	
	Phonebook(void);
	~Phonebook(void);

	void	add(int nb);
	void	search(void);
	void	print_header(void);

	private:
	
	Contact	contacts[8];
	int		nb_contacts;
};



#endif