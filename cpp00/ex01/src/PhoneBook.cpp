/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 09:12:21 by ccolin            #+#    #+#             */
/*   Updated: 2025/03/27 11:52:53 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>
#include <stdlib.h>
#include <iomanip>

void PhoneBook::add(int *i)
{
    contacts[*i].get_informations();
    (*i)++;
    if (*i == 8)
        *i = 0;
    return ;
}

void PhoneBook::print_index(void)
{
    std::cout << "\033[2J\033[H";
    std::cout << " ";
    for (int i = 0; i < 43; i++)
        std::cout << "_";
    std::cout << std::endl;
    std::cout << "|          ";
    std::cout << "|          ";
    std::cout << "|          ";
    std::cout << "|          |";
    std::cout << std::endl;
    std::cout << "|";
    std::cout << std::setw(10) << "index";
    std::cout << "|";
    std::cout << std::setw(10) << "First name";
    std::cout << "|";
    std::cout << std::setw(10) << "Last name";
    std::cout << "|";
    std::cout << std::setw(10) << "Nickname";
    std::cout << "|" << std::endl;
    std::cout << "|__________";
    std::cout << "|__________";
    std::cout << "|__________";
    std::cout << "|__________|";
    std::cout << std::endl;
    for (int i = 0; i < 8; i++)
    {
        contacts[i].print_contact_preview(i);
        if (i < 7)
        {
            std::cout << "|----------";
            std::cout << "|----------";
            std::cout << "|----------";
            std::cout << "|----------|";
            std::cout << std::endl;
        }
    }
    std::cout << " ";
    for (int i = 0; i < 43; i++)
        std::cout << "‾";
    std::cout << std::endl;
}

void PhoneBook::search(void)
{
    int choice;

    while (1)
    {
        PhoneBook::print_index();
        std::cout << "Choose a contact" << std::endl << std::endl << "> ";

        if (!(std::cin >> choice))
                exit(0);
        if (choice >= 0 && choice <= 7)
        {
            contacts[choice].print_informations();
            break;
        }
    }
}
