/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcavillo <fcavillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:38:18 by fcavillo          #+#    #+#             */
/*   Updated: 2021/11/30 11:42:13 by fcavillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define  CONTACT_CLASS_HPP

#include <string>
#include <iostream>
#include <limits>
#include <iomanip>

class Contact
{
    public:

    Contact(void);
    ~Contact(void);

    void    fill_info(int i);
    void    print_contact(void);
    void    print_list(void);

    private:

    int nb;
    std::string info[5];
};

#endif