/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 11:01:16 by ccolin            #+#    #+#             */
/*   Updated: 2025/01/06 11:37:07 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>	
#include <cctype>

int	main(int argc, char **argv)
{
	int	i = 1;
	int	j = 0;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		{
			while (argv[i])
			{
				while (argv[i][j])
				{
					std::cout << static_cast<char>(std::toupper(argv[i][j]));
					j++;
				}
				j = 0;
				i++;
			}
		}
	std::cout << std::endl;
	return (0);
}
