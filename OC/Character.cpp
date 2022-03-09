#include "Character.hpp"

Character::Character(std::string weaponName, int weaponDmg) : m_health(100),
m_weaponName(weaponName), m_weaponDmg(weaponDmg)
{
}

Character::~Character()
{
}

void    Character::takeDamage(int dmg)
{
	m_health -= dmg;
}

void    Character::attack(Character &target)
{
	target.takeDamage(m_weaponDmg);
}

void	Character::heal(int healingValue)
{
	m_health += healingValue;
}

void	Character::switchWeapon(std::string newWeaponName, int newWeaponDmg)
{
	m_weaponName = newWeaponName;
	m_weaponDmg = newWeaponDmg;
}

bool	Character::isAlive() const
{
	if (m_health > 0)
		return true;
	return false;
}

void	Character::printStats(int param) const
{
	std::cout << "Health : " << m_health << std::endl;
	std::cout << 
}