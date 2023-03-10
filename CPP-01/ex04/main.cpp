/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 10:29:48 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/03/10 16:23:49 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	if (argc != 4){
		std::cerr << "Error Usage : [filename] [string 1] [string 2]" << std::endl;
		return (1);
	}
	std::string toFind = argv[2];
	std::string toReplace = argv[3];
	std::string	filename = argv[1];
	std::ifstream input(filename.c_str());
	if (!input)
	{
		std::cerr << "Error opening input file" << std::endl;
		return (1);
	}
	filename.append(".replace");
	std::ofstream output(filename.c_str());
	if (!output){
		std::cerr << "Error opening output file" << std::endl;
		return (1);
	}
	std::string line;
	while (std::getline(input, line))
	{
		size_t	index = 0;
		index = line.find(toFind, index);
		while (index != std::string::npos){
			std::string tempLine = line.substr(index + toFind.length(), line.length());
			line = line.substr(0, index).append(toReplace);
			line.append(tempLine);
			index += toReplace.length();
			index = line.find(toFind, index);
		}
		output << line << std::endl;
	}
	return (0);
}
