#include <iostream>
#include "Fixed.hpp"

int main() 
{
	std::cout << "--- Constructors and Output ---" << std::endl;
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	std::cout << "a: " << a << " (expected: 0)" << std::endl;
	std::cout << "++a: " << ++a << " (expected: 0.00390625)" << std::endl;
	std::cout << "a after ++a: " << a << " (expected: 0.00390625)" << std::endl;
	std::cout << "a++: " << a++ << " (expected: 0.00390625)" << std::endl;
	std::cout << "a after a++: " << a << " (expected: 0.0078125)" << std::endl;
	std::cout << "b: " << b << " (expected: 10.1016)" << std::endl;
	std::cout << "max(a, b): " << Fixed::max(a, b) << " (expected: 10.1016)" << std::endl;

	std::cout << "\n--- Comparison Operators ---" << std::endl;
	Fixed c(10);
	Fixed d(42.42f);
	std::cout << "c: " << c << ", d: " << d << std::endl;
	std::cout << "c > d: " << (c > d) << " (expected: 0)" << std::endl;
	std::cout << "c < d: " << (c < d) << " (expected: 1)" << std::endl;
	std::cout << "c >= d: " << (c >= d) << " (expected: 0)" << std::endl;
	std::cout << "c <= d: " << (c <= d) << " (expected: 1)" << std::endl;
	std::cout << "c == d: " << (c == d) << " (expected: 0)" << std::endl;
	std::cout << "c != d: " << (c != d) << " (expected: 1)" << std::endl;

	std::cout << "\n--- Arithmetic Operators ---" << std::endl;
	std::cout << "c + d: " << (c + d) << " (expected: 52.42)" << std::endl;
	std::cout << "c - d: " << (c - d) << " (expected: -32.42)" << std::endl;
	std::cout << "c * d: " << (c * d) << " (expected: 424.2)" << std::endl;
	std::cout << "c / d: " << (c / d) << " (expected: ~0.2357)" << std::endl;

	std::cout << "\n--- Increment / Decrement ---" << std::endl;
	Fixed e;
	std::cout << "e: " << e << " (expected: 0)" << std::endl;
	std::cout << "++e: " << ++e << " (expected: 0.00390625)" << std::endl;
	std::cout << "e++: " << e++ << " (expected: 0.00390625)" << std::endl;
	std::cout << "e after e++: " << e << " (expected: 0.0078125)" << std::endl;
	std::cout << "--e: " << --e << " (expected: 0.00390625)" << std::endl;
	std::cout << "e--: " << e-- << " (expected: 0.00390625)" << std::endl;
	std::cout << "e after e--: " << e << " (expected: 0)" << std::endl;

	std::cout << "\n--- Min/Max Static Functions ---" << std::endl;
	Fixed f(3.14f);
	Fixed g(3.15f);
	const Fixed cf(2.71f);
	const Fixed cg(2.72f);

	std::cout << "min(f, g): " << Fixed::min(f, g) << " (expected: 3.14)" << std::endl;
	std::cout << "max(f, g): " << Fixed::max(f, g) << " (expected: 3.15)" << std::endl;
	std::cout << "min(cf, cg): " << Fixed::min(cf, cg) << " (expected: 2.71)" << std::endl;
	std::cout << "max(cf, cg): " << Fixed::max(cf, cg) << " (expected: 2.72)" << std::endl;

	std::cout << "\n--- Raw Bits Access ---" << std::endl;
	Fixed h;
	h.setRawBits(123456);
	std::cout << "h raw bits: " << h.getRawBits() << " (expected: 123456)" << std::endl;
	std::cout << "h as int: " << h.toInt() << " (value depends on raw bits)" << std::endl;
	std::cout << "h as float: " << h.toFloat() << " (value depends on raw bits)" << std::endl;

	return 0;
}
