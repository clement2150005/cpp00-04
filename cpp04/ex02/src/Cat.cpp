/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:59:47 by ccolin            #+#    #+#             */
/*   Updated: 2025/04/08 16:46:57 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	brain = new Brain();
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &other)
{
	std::cout << "Cat copy constructor called" << std::endl;
	type = other.type;
	brain = new Brain(*other.brain);
}

Cat    &Cat::operator=(const Cat &other)
{
	std::cout << "Cat copy assignment called" << std::endl;
	if (this != &other)
	{
		type = other.type;
		delete brain;
		brain = new Brain(*other.brain);
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete brain;
}

void	Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}

std::string	Cat::getType() const
{
	return (this->type);
}

Brain*	Cat::getBrain() const
{
	return (brain);
}

void	Cat::setIdea(std::string idea, int index)
{
	getBrain()->getIdeas()[index] = idea;
}

void	Cat::think(int index) const
{
	std::cout << getBrain()->getIdeas()[index] << std::endl;
}
