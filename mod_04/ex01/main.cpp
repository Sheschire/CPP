/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:00:14 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/23 13:47:32 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

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

int main()
{
	color("yellow", "----- [ Init every objects ] -----\n\n");
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* meta2 = new WrongAnimal();
	const WrongAnimal* k = new WrongCat();

	std::cout << std::endl;
	color("yellow", "----- [ Test types & sounds ] -----\n\n");
	std::cout << std::endl;
	std::cout << "Dog Animal-casted inheritance type : " << j->getType() << std::endl;
	std::cout << "Cat Animal-casted inheritance type : " << i->getType() << std::endl;
	std::cout << "WrongCat WrongAnimal-casted inheritance type : " << k->getType() << std::endl;
	std::cout << "Cat say : ";
	i->makeSound();
	std::cout << "Dog say : ";
	j->makeSound();
	std::cout << "Animal say : ";
	meta->makeSound();
	std::cout << "WrongCat say : ";
	k->makeSound();
	std::cout << "WrongAnimal say : ";
	meta2->makeSound();
	std::cout << std::endl;

	color("yellow", "----- [ Test meals ] -----\n\n");
	i->eat();
	j->eat();
	meta->eat();
	k->eat();
	meta2->eat();

	std::cout << std::endl;
	color("yellow", "----- [ Delete every objects ] -----\n\n");
	delete(meta);
	delete(j);
	delete(i);
	delete(meta2);
	delete(k);

	std::cout << std::endl;
	color("yellow", "----- [ Animal array allocation ] -----\n\n");
	int iter;
	int	size = 4;
	int	nbDog = 0;
	int	nbCat = 0;
	
	Animal	*animalTab[size];
	for(iter = 0; iter < size; iter++)
	{
		if (iter < size / 2)
		{
			animalTab[iter] = new Dog();
			nbDog++;
			animalTab[iter]->makeSound();
		}
		else
		{
			animalTab[iter] = new Cat();
			nbCat++;
			animalTab[iter]->makeSound();
		}
	}
	std::cout << std::endl;
	std::cout << "nbDog created : " << nbDog << std::endl \
	<< "nbCat created : " << nbCat << std::endl;

	std::cout << std::endl;
	color("yellow", "----- [ Delete Animal array ] -----\n\n");
	for(iter = 0; iter < size; iter++)
		delete(animalTab[iter]);

	std::cout << std::endl;
	color("yellow", "----- [ Test Coplien From ] -----\n\n");
	Animal	*cat = new Cat();
	Animal	*copycat(cat);
	Animal	*dog = cat;

	std::cout << "Copycat type : " << copycat->getType() << std::endl;
	std::cout << "Dog type : " << dog->getType() << std::endl;
	return 0;
}