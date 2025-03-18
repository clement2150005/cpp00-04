/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 09:12:21 by ccolin            #+#    #+#             */
/*   Updated: 2025/03/18 16:17:37 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include <stdlib.h>
#include <iomanip>
#include <cstdlib>

std::string Contact::truncate(std::string str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void Contact::get_informations(void)
{    
    do {
        std::cout << "\033[2J\033[H";
        std::cout << "First name: ";
        if (!std::getline(std::cin, first_name))
            exit(0);
    } while (first_name.empty());

    do {
        std::cout << "\033[2J\033[H";
        std::cout << "Last name: ";
        if (!std::getline(std::cin, last_name))
            exit(0);
    } while (last_name.empty());
    
    do {
        std::cout << "\033[2J\033[H";
        std::cout << "Nickname: ";
        if (!std::getline(std::cin, nickname))
            exit(0);
    } while (nickname.empty());
    
    do {
        std::cout << "\033[2J\033[H";
        std::cout << "Phone number: ";
        if (!std::getline(std::cin, phone_number))
            exit(0);
    } while (phone_number.empty());
    
    do {
        std::cout << "\033[2J\033[H";
        std::cout << "Darkest secret: ";
        if (!std::getline(std::cin, darkest_secret))
            exit(0);
    } while (darkest_secret.empty());

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
        if (!std::getline(std::cin, choice))
            exit(0);
        if (choice == "Y")
            return ;
    }
}

void    Contact::print_contact_preview(int i)
{
    std::cout << "|";
    std::cout << std::setw(10) << i;
    std::cout << "|";
    std::cout << std::setw(10) << truncate(first_name);
    std::cout << "|";
    std::cout << std::setw(10) << truncate(last_name);
    std::cout << "|";
    std::cout << std::setw(10) << truncate(nickname);
    std::cout << "|" << std::endl;
}

