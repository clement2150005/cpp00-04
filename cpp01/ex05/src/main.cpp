/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 10:09:52 by ccolin            #+#    #+#             */
/*   Updated: 2025/04/04 10:46:43 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl harl;
	if (argc == 2)
		harl.complain(argv[1]);
	else
	{
		harl.complain("debug");
		harl.complain("info");
		harl.complain("warning");
		harl.complain("error");
	}
}