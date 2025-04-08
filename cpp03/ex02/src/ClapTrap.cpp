/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 14:16:46 by ccolin            #+#    #+#             */
/*   Updated: 2025/04/08 16:07:27 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	name = "Unknown";
	type = "ClapTrap";
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
	std::cout << type << " " << "Unknown ClapTrap's default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	type = "ClapTrap";
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
	std::cout << type << " " << name << "'s constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	name = other.name;
    type = other.type;
    hitPoints = other.hitPoints;
    energyPoints = other.energyPoints;
    attackDamage = other.attackDamage;
	std::cout << other.type << " " << other.name << "'s copy constructor called" << std::endl;
}

ClapTrap    &ClapTrap::operator=(const ClapTrap &other)
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

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << "'s destructor called" << std::endl;
}

void    ClapTrap::attack(const std::string& target)
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

void    ClapTrap::takeDamage(unsigned int amount)
{
	if (isDead())
		return ;
	hitPoints -= amount;
	std::cout << type << " " << name << " takes " << amount<< " points of damage!" << std::endl;
	if (hitPoints <= 0)
	{
		hitPoints = 0;
		std::cout << type << " " << name << " has died!" << std::endl;
	}
}

void    ClapTrap::beRepaired(unsigned int amount)
{
	if (isDead())
		return ;
	if (energyPoints <= 0)
		return ;
	hitPoints += amount;
	std::cout << type << " " << name << " repairs itself, gaining " << amount << " hit points!" << std::endl;
	energyPoints--;
}

bool	ClapTrap::isDead(void)
{
	if (hitPoints > 0)
		return (false);
	std::cout << type << " " << name << " is dead" << std::endl;
	return (true);
}
