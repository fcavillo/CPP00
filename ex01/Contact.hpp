/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcavillo <fcavillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:38:18 by fcavillo          #+#    #+#             */
/*   Updated: 2021/11/30 11:42:13 by fcavillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define  CONTACT_HPP

#include <string>
#include <iostream>
#include <limits>
#include <iomanip>

/*
**	info array is private but can be accessed through public functions
*/

class Contact
{
	public:

	Contact(void);
	~Contact(void);

	void    setInfo(int i);
	void    getInfo(void);
	void    print_list(void);

	private:

	int nb;
	std::string info[5];
};

#endif