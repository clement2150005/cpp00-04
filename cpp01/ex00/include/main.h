/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 09:32:43 by ccolin            #+#    #+#             */
/*   Updated: 2025/04/01 10:20:37 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
#define MAIN_H

#include "Zombie.hpp"
#include <stdlib.h>
#include <unistd.h>

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif