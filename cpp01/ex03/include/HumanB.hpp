/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 13:24:43 by ccolin            #+#    #+#             */
/*   Updated: 2025/04/01 14:38:00 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
private:
	Weapon* weapon;
	std::string name;
public:
	HumanB(std::string name);
	void	attack();
	void	setWeapon(Weapon& weapon);
	~HumanB();
};
