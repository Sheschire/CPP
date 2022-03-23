/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:00:14 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/23 12:19:53 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* meta2 = new WrongAnimal();
	const WrongAnimal* k = new WrongCat();

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

	i->eat();
	j->eat();
	meta->eat();
	k->eat();
	meta2->eat();

	delete(meta);
	delete(i);
	delete(j);
	delete(k);
	delete(meta2);
	
	return 0;
}