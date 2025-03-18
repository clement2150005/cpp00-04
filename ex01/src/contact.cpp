/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 09:12:21 by ccolin            #+#    #+#             */
/*   Updated: 2025/03/18 13:21:14 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include <iomanip>
#include <cstdlib>

void	contact::get_informations()
{
    system("clear");
    std::cout << "First name: ";
    getline(std::cin, first_name);

    system("clear");
    std::cout << "Last name: ";
    getline(std::cin, last_name);

    system("clear");
    std::cout << "Nickname: ";
    getline(std::cin, nickname);

    system("clear");
    std::cout << "Phone number: ";
    getline(std::cin, phone_number);

    system("clear");
    std::cout << "Darkest secret: ";
    getline(std::cin, darkest_secret);
}
void	contact::print_informations()
{
    system("clear");
    std::cout << "First name: " << first_name << std::endl;
    std::cout << "Last name: " << last_name << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Phone number: " << phone_number << std::endl;
    std::cout << "Darkest secret: " << darkest_secret << std::endl;
}