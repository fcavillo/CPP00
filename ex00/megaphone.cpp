/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcavillo <fcavillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:37:50 by fcavillo          #+#    #+#             */
/*   Updated: 2021/11/29 15:32:48 by fcavillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int	main(int ac, char **av)
{
	size_t j = 0;
	size_t i = 0;
	
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		return (0);
	}
	j = 1;
	while (ac > 1)
	{
		i = 0;
		while (i < strlen(av[j]))
		{
			av[j][i] = std::toupper(av[j][i]);
			i++;
		}
		std::cout << av[j];
		ac--;
		j++;
	}
	std::cout << std::endl;
	return (0);
}