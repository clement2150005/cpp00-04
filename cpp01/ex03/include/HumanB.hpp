/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 13:24:43 by ccolin            #+#    #+#             */
/*   Updated: 2025/04/12 15:27:43 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
private:
	std::string name;
	Weapon* weapon;
public:
	HumanB(std::string name);
	HumanB(std::string name, Weapon& weapon);
	void	attack();
	void	setWeapon(Weapon& weapon);
	~HumanB();
};
