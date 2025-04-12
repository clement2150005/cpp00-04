/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 09:18:53 by ccolin            #+#    #+#             */
/*   Updated: 2025/04/12 09:53:13 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	main(void)
{
	int			input = 0;
	std::string	name;
	Zombie		*z = NULL;
	
	while (1)
	{
		while (input < 1 || input > 5)
		{
			system("clear");
			std::cout << "-----------------" << std::endl;
			std::cout << "Ramdom chump: 1" << std::endl;
			std::cout << "New Zombie: 2" << std::endl;
			std::cout << "Announce Zombie: 3" << std::endl;
			std::cout << "Kill Zombie: 4" << std::endl;
			std::cout << "Exit: 5" << std::endl;
			std::cout << "-----------------" << std::endl;
			std::cout << "> ";
			std::cin >> input;
			std::cin.ignore();
		}
		if (input == 1)
		{
			system("clear");
			std::cout << "Zombie name:" << std::endl << "> ";
			std::getline(std::cin, name);
			randomChump(name);
			sleep(2);
		}
		else if (input == 2)
		{
			system("clear");
			std::cout << "Zombie name:" << std::endl << "> ";
			std::getline(std::cin, name);
			if (z)
				delete z;
			z = newZombie(name);
		}
		else if (input == 3)
		{
			system("clear");
			if (!z)
				std::cout << "No zombie to announce" << std::endl;
			else
				z->announce();
			sleep(2);
		}
		else if (input == 4)
		{
			system("clear");
			if (!z)
				std::cout << "No zombie to kill" << std::endl;
			else
			{
				delete z;
				z = NULL;
			}
			sleep(2);
		}
		else if (input == 5)
		{
			if (z)
				delete z;
			return (0);
		}
		input = 0;
	}
}
