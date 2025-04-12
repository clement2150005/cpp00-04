/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 09:18:53 by ccolin            #+#    #+#             */
/*   Updated: 2025/04/12 09:54:14 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int	main(void)
{
	int			N;
	std::string	name;
	Zombie*		horde = NULL;
	
	std::cout << "Name:" << std::endl << "> ";
	std::getline(std::cin, name);
	std::cout << "N:" << std::endl << "> ";
	std::cin >> N;
	std::cin.ignore();
	horde = zombieHorde(N, name);
	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete[] horde;
}
