#include <iostream>
#include "Character.hpp"

int	main()
{
	Character theo, bastien("Steel Sword", 30);

	theo.attack(bastien);
	std::cout << "Theo health : " << theo.m_health << "Bastien health : " << bastien.m_health;
}