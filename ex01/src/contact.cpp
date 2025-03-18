/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 09:12:21 by ccolin            #+#    #+#             */
/*   Updated: 2025/03/18 15:09:23 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include <iomanip>
#include <cstdlib>

void	Contact::get_informations(void)
{
    std::cout << "\033[2J\033[H";
    std::cout << "First name: ";
    getline(std::cin, first_name);

    std::cout << "\033[2J\033[H";
    std::cout << "Last name: ";
    getline(std::cin, last_name);

    std::cout << "\033[2J\033[H";
    std::cout << "Nickname: ";
    getline(std::cin, nickname);

    std::cout << "\033[2J\033[H";
    std::cout << "Phone number: ";
    getline(std::cin, phone_number);

    std::cout << "\033[2J\033[H";
    std::cout << "Darkest secret: ";
    getline(std::cin, darkest_secret);
    std::cout << "\033[2J\033[H";
}

void	Contact::print_informations(void)
{
    std::string choice;

    while (1)
    {
        std::cout << "\033[2J\033[H";
        std::cout << "First name: " << first_name << std::endl;
        std::cout << "Last name: " << last_name << std::endl;
        std::cout << "Nickname: " << nickname << std::endl;
        std::cout << "Phone number: " << phone_number << std::endl;
        std::cout << "Darkest secret: " << darkest_secret << std::endl;
        std::cout << std::endl << "Go back to menu ? Y/N" << std::endl << std::endl << "> ";
        std::cin >> choice;
        if (choice == "Y")
            return ;
    }
}

void    Contact::print_contact_preview(int i)
{
    std::cout << "|";
    std::cout << std::setw(10) << i;
    std::cout << "|";
    std::cout << std::setw(10) << first_name;
    std::cout << "|";
    std::cout << std::setw(10) << last_name;
    std::cout << "|";
    std::cout << std::setw(10) << nickname;
    std::cout << "|" << std::endl;
}