/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 14:16:48 by ccolin            #+#    #+#             */
/*   Updated: 2025/04/08 15:49:46 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	std::cout << "\n--- FragTrap Constructor Tests ---\n";
	FragTrap f1("1");
	FragTrap f2("2");
	FragTrap f3(f1); // copy constructor
	f3 = f2;         // assignment operator

	std::cout << "\n--- Action Tests ---\n";
	f1.attack("2");
	f2.takeDamage(30);
	f2.beRepaired(20);
	f2.highFivesGuys();

	std::cout << "\n--- Exhaust Energy ---\n";
	for (int i = 0; i < 101; i++)
		f1.attack("2");

	std::cout << "\n--- Kill and Try Actions ---\n";
	f2.takeDamage(999);
	f2.attack("1");    // should fail
	f2.beRepaired(10); // should fail
	f2.takeDamage(5);  // already dead

	std::cout << "\n--- Destructors ---\n";
	return 0;
}
