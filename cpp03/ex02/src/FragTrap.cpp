/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 14:16:46 by ccolin            #+#    #+#             */
/*   Updated: 2025/04/08 15:48:47 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	name = "Unknown";
	type = "FragTrap";
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
	std::cout << type << " " << "Unknown FragTrap's default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->name = name;
	type = "FragTrap";
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
	std::cout << type << " " << name << "'s constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other)
{
	name = other.name;
    type = other.type;
    hitPoints = other.hitPoints;
    energyPoints = other.energyPoints;
    attackDamage = other.attackDamage;
	std::cout << other.type << " " << other.name << "'s copy constructor called" << std::endl;
}

FragTrap    &FragTrap::operator=(const FragTrap &other)
{
    if (this != &other)
    {
        name = other.name;
        type = other.type;
        hitPoints = other.hitPoints;
        energyPoints = other.energyPoints;
        attackDamage = other.attackDamage;
    }
    return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name << "'s destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << name << " says \"High fives guys!\"" << std::endl;
}