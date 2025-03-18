/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 13:00:38 by ccolin            #+#    #+#             */
/*   Updated: 2025/03/18 14:58:39 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

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
        getline(std::cin, choice);
        if (choice == "ADD")
            phonebook.add(&i);
        else if (choice == "SEARCH")
            phonebook.search();
        else
        std::cout << "\033[2J\033[H";
    }
    // for (int i = 0; i < 8; i++)
    //     phonebook.add(i);
    // phonebook.search();
}