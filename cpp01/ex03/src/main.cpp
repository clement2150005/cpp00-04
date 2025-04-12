/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 12:48:41 by ccolin            #+#    #+#             */
/*   Updated: 2025/04/12 15:29:34 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");

		HumanA bob("Bob", club);
		bob.attack();

		club.setType("some other type of club");
		bob.attack();
	}
	std::cout << "-------------------------------" << std::endl;
	{
		Weapon club = Weapon("crude spiked club");

		HumanB jim("Jim", club);
		jim.attack();

		club.setType("some other type of club");
		jim.attack();
	}
	std::cout << "-------------------------------" << std::endl;
	{
		Weapon club = Weapon("crude spiked club");

		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();

		club.setType("some other type of club");
		jim.attack();
	}
	std::cout << "-------------------------------" << std::endl;
	{
		HumanB jim("Jim");
		jim.attack();
	}

	return 0;
}
