/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:58:58 by ccolin            #+#    #+#             */
/*   Updated: 2025/04/08 18:35:36 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* catsAndDogs[100];
	
	for (int i = 0; i < 50; i++)
		catsAndDogs[i] = new Cat();
	for (int i = 50; i < 100; i++)
		catsAndDogs[i] = new Dog();
	for (int i = 0; i < 100; i++)
		delete catsAndDogs[i];
	return 0;
}
