/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 11:25:55 by ccolin            #+#    #+#             */
/*   Updated: 2025/04/05 15:08:59 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main() {
	Fixed a(5);			// 5.0
	Fixed b(2);			// 2.0

	std::cout << "--- Comparison Operators ---" << std::endl;
	std::cout << "a > b: " << (a > b) << " (expected: 1)" << std::endl;
	std::cout << "a < b: " << (a < b) << " (expected: 0)" << std::endl;
	std::cout << "a >= b: " << (a >= b) << " (expected: 1)" << std::endl;
	std::cout << "a <= b: " << (a <= b) << " (expected: 0)" << std::endl;
	std::cout << "a == b: " << (a == b) << " (expected: 0)" << std::endl;
	std::cout << "a != b: " << (a != b) << " (expected: 1)" << std::endl;

	std::cout << "--- Arithmetic Operators ---" << std::endl;
	std::cout << "a + b: " << (a + b) << " (expected: 7.0)" << std::endl;
	std::cout << "a - b: " << (a - b) << " (expected: 3.0)" << std::endl;
	std::cout << "a * b: " << (a * b) << " (expected: 10.0)" << std::endl;
	std::cout << "a / b: " << (a / b) << " (expected: 2.5)" << std::endl;

	std::cout << "--- Increment / Decrement ---" << std::endl;
	Fixed c(1);

	std::cout << "c: " << c << " (expected: 1.0)" << std::endl;
	std::cout << "++c: " << ++c << " (expected: 2.0)" << std::endl;
	std::cout << "c++: " << c++ << " (expected: 2.0)" << std::endl;
	std::cout << "c after c++: " << c << " (expected: 3.0)" << std::endl;

	std::cout << "--c: " << --c << " (expected: 2.0)" << std::endl;
	std::cout << "c--: " << c-- << " (expected: 2.0)" << std::endl;
	std::cout << "c after c--: " << c << " (expected: 1.0)" << std::endl;

	return 0;
}
