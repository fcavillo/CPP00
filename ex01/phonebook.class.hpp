/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcavillo <fcavillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 16:31:22 by fcavillo          #+#    #+#             */
/*   Updated: 2021/11/29 19:39:29 by fcavillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <cstring>

/*
** declare classes
*/

class Phonebook{

public:

	
	const int	i;
	
	Phonebook(void);
	~Phonebook(void);

	void	fct(void) const;
};



#endif