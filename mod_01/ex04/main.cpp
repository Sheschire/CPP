/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:02:32 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/15 15:21:44 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	color(std::string c, std::string s)
{
	if (!c.compare("red"))
		std::cout << "\033[1;31m" + s + "\033[0m";
	else if (!c.compare("yellow"))
		std::cout << "\033[1;33m" + s + "\033[0m";
	else if (!c.compare("blue"))
		std::cout << "\033[1;34m" + s + "\033[0m";
	else if (!c.compare("green"))
		std::cout << "\033[1;32m" + s + "\033[0m";
}

int	_err(std::string s)
{
	color("red", "Error: " + s);
	return (1);
}

int	fill_ofs(std::ifstream *ifs, std::ofstream *ofs, const char *_s1, const char *_s2)
{
	std::string	ifs_content;
	std::string s1;
	std::string	s2;
	int			finder;
	int			i;

	s1 = _s1;
	s2 = _s2;

	// COPY IFS CONTENT INTO STRING
	for (i = 0; ifs->eof() != true; i++)
		ifs_content += ifs->get();
	ifs_content.erase(ifs_content.end() - 1);

	// REPLACE S1 OCC BY S2
	while ((finder = ifs_content.find(s1)) != -1)
	{
		ifs_content.erase(finder, s1.length());
		ifs_content.insert(finder, s2);
	}

	// COPY REPLACED STRING INTO OFS && RETURN
	*ofs << ifs_content;
	return (1);
}

int	main(int ac, char **av)
{
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string		replace;
	const char		*ofs_file;
	
	// CHECK PARAMETERS
	if (ac != 4)
		return (_err("Number of argument invalid\n"));
	ifs.open(av[1], std::ifstream::in);
	if (!ifs)
		return (_err("Failed to open input file stream\n"));

	// PREPARE OFS
	replace = av[1];
	replace.append(".replace");
	ofs_file = replace.c_str();
	ofs.open(ofs_file);
	if (!ofs)
		return (_err("Failed to open output file stream\n"));
	
	// REPLACE ALGO && CLOSE FILES
	fill_ofs(&ifs, &ofs, av[2], av[3]);
	ifs.close();
	ofs.close();
}