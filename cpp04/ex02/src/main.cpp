/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:58:58 by ccolin            #+#    #+#             */
/*   Updated: 2025/06/02 12:46:42 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main()
{
	Animal* animal = new Animal(); // Instantiation of Animal class should not work
	return 0;
}

// int main()
// {
// 	const Animal* catsAndDogs[100];
	
// 	for (int i = 0; i < 50; i++)
// 		catsAndDogs[i] = new Cat();
// 	for (int i = 50; i < 100; i++)
// 		catsAndDogs[i] = new Dog();
// 	for (int i = 0; i < 100; i++)
// 		delete catsAndDogs[i];

// 	Animal* strayCat = new Cat();
// 	strayCat->setIdea("Chase mouse", 0);
		
// 	Animal* houseCat = new Cat(*(dynamic_cast<Cat*>(strayCat)));
		
// 	houseCat->setIdea("Eat treats", 0);
		
// 	strayCat->think(0);    // should print "Chase mouse"
// 	houseCat->think(0);    // should print "Eat treats"
		
// 	delete strayCat;
// 	delete houseCat;
		
// 	return 0;
// }
