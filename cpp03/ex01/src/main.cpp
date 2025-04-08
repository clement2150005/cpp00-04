/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 14:16:48 by ccolin            #+#    #+#             */
/*   Updated: 2025/04/08 15:14:09 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::cout << "\n--- ScavTrap Constructor Tests ---\n";
	ScavTrap s1("1");
	ScavTrap s2("2");
	ScavTrap s3(s1); // copy constructor
	s3 = s2;         // assignment operator

	std::cout << "\n--- Action Tests ---\n";
	s1.attack("2");
	s2.takeDamage(20);
	s2.beRepaired(10);
	s2.guardGate();

	std::cout << "\n--- Exhaust Energy ---\n";
	for (int i = 0; i < 51; i++)
		s1.attack("2");

	std::cout << "\n--- Kill and Try Actions ---\n";
	s2.takeDamage(999); // dead
	s2.attack("1");     // should fail
	s2.beRepaired(10);  // should fail
	s2.takeDamage(5);   // should print already dead

	std::cout << "\n--- Destructors ---\n";
	return 0;
}
