/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 08:28:32 by ccolin            #+#    #+#             */
/*   Updated: 2025/04/04 09:36:59 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <iostream>
 #include <fstream>

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (0);

	std::string filename(argv[1]);
	std::string s1(argv[2]);
	std::string s2(argv[3]);

	std::ifstream in(filename);
	std::ofstream out(filename + ".replace");
	if (!in || !out)
	return (0);

	std::string fileContent((std::istreambuf_iterator<char>(in)), std::istreambuf_iterator<char>());

	std::string::size_type pos = 0;
	while ((pos = fileContent.find(s1, pos)) != std::string::npos)
	{
		fileContent.erase(pos, s1.length());
		fileContent.insert(pos, s2);
		pos += s2.length();
	}
	out << fileContent;
}