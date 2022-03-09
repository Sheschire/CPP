#include "Weapon.hpp"

Weapon::Weapon(std::string name, int dmg) : m_name(name), m_dmg(dmg)
{
}

void	Weapon::swap(std::string name, int dmg)
{
	m_name = name;
	m_dmg = dmg;
}

void	Weapon::print() const
{
	std::cout << "Weapon :" << m_name << " (Damage : "<< m_dmg << ")" << std::endl;
}