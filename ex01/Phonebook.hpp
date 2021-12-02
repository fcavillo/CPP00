/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcavillo <fcavillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 16:31:22 by fcavillo          #+#    #+#             */
/*   Updated: 2021/11/30 17:59:37 by fcavillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include <iostream>
#include <cstring>
#include <limits>
#include "contact.class.hpp"

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