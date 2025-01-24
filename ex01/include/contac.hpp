/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contac.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 09:46:06 by ccolin            #+#    #+#             */
/*   Updated: 2025/01/13 10:11:11 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;

	public:
		void	get_informations();
		void	print_informations();
};