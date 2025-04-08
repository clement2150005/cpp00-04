/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 14:16:46 by ccolin            #+#    #+#             */
/*   Updated: 2025/04/08 15:31:08 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	name = "Unknown";
	type = "ScavTrap";
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
	std::cout << type << " " << "Unknown ScavTrap's default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->name = name;
	type = "ScavTrap";
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
	std::cout << type << " " << name << "'s constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	name = other.name;
    type = other.type;
    hitPoints = other.hitPoints;
    energyPoints = other.energyPoints;
    attackDamage = other.attackDamage;
	std::cout << other.type << " " << other.name << "'s copy constructor called" << std::endl;
}

ScavTrap    &ScavTrap::operator=(const ScavTrap &other)
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

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << name << "'s destructor called" << std::endl;
}

void    ScavTrap::attack(const std::string& target)
{
	if (isDead())
		return ;
	if (energyPoints <= 0)
	{
		std::cout << type << " " << name
			<< " does not have enough energy to attack "
			<< target << std::endl;
		return ;
	}
	std::cout << type << " " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
	energyPoints--;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode";
}