/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 11:37:25 by ccolin            #+#    #+#             */
/*   Updated: 2025/04/01 11:51:28 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string		string = "HI THIS IS BRAIN";
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;
	
	//Adresses
	std::cout << "Memory address of the string variable:" << std::endl;
	std::cout << static_cast<void*>(&string) << std::endl << std::endl;

	std::cout << "Memory address held by stringPTR:" << std::endl;
	std::cout << static_cast<void*>(stringPTR) << std::endl << std::endl;

	std::cout << "Memory address held by stringREF:" << std::endl;
	std::cout << static_cast<void*>(&stringREF) << std::endl << std::endl;

	//Values
	std::cout << "Value of the string variable:" << std::endl;
	std::cout << string << std::endl << std::endl;

	std::cout << "Value pointed to by stringPTR:" << std::endl;
	std::cout << *stringPTR << std::endl << std::endl;

	std::cout << "Value pointed to by stringREF:" << std::endl;
	std::cout << stringREF << std::endl << std::endl;
}
