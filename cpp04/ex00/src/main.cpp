/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:58:58 by ccolin            #+#    #+#             */
/*   Updated: 2025/04/08 17:35:54 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main() {
	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const WrongAnimal* wrongCat = new WrongCat();
	const Dog* copyDog = new Dog(*dynamic_cast<const Dog*>(dog));
	const Cat* copyCat = new Cat(*dynamic_cast<const Cat*>(cat));
	const Dog copyAssignmentDog = *dynamic_cast<const Dog*>(dog);
	const Cat copyAssignmentCat = *dynamic_cast<const Cat*>(cat);

	std::cout << animal->getType() << std::endl;
	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
	std::cout << wrongCat->getType() << std::endl;
	std::cout << copyDog->getType() << std::endl;
	std::cout << copyCat->getType() << std::endl;
	std::cout << copyAssignmentDog.getType() << std::endl;
	std::cout << copyAssignmentCat.getType() << std::endl;

	animal->makeSound(); // will output the base Animal sound
	dog->makeSound(); // will output the dog sound!
	cat->makeSound(); // will output the cat sound!
	wrongCat->makeSound(); // will not output the cat sound!
	copyDog->makeSound(); // will output the dog sound!
	copyCat->makeSound(); // will output the cat sound!
	copyAssignmentDog.makeSound(); // will output the dog sound!
	copyAssignmentCat.makeSound(); // will output the cat sound!

	delete animal;
	delete dog;
	delete cat;
	delete wrongCat;
	delete copyDog;
	delete copyCat;

	return 0;
}
