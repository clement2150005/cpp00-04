/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 13:00:38 by ccolin            #+#    #+#             */
/*   Updated: 2025/03/18 15:57:53 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <stdlib.h>

int main(void)
{
    Phonebook   phonebook;
    std::string choice;
    int         i = 0;

    std::cout << "\033[2J\033[H";
    while (choice != "EXIT")
    {
        std::cout << "Browse contacts: SEARCH" << std::endl;
        std::cout << "Add contact: ADD" << std::endl;
        std::cout << "Exit: EXIT" << std::endl;
        std::cout << std::endl << "> ";
        if (!getline(std::cin, choice))
            exit(0);
        if (choice == "ADD")
            phonebook.add(&i);
        else if (choice == "SEARCH")
            phonebook.search();
        else
        std::cout << "\033[2J\033[H";
    }
}