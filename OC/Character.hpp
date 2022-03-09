#ifndef DEF_CHARACTER
#define DEF_CHARACTER

#include <iostream>
#include <string>

class	Character
{
	std::string  m_weaponName;
	int m_weaponDmg;
	int m_health;

	public:

	Character(std::string weaponName, int weaponDmg);
	~Character();
	void    takeDamage(int dmg);
	void    attack(Character &target);
	void	heal(int healingValue);
	void	switchWeapon(std::string newWeaponName, int newWeaponDmg);
	bool	isAlive() const;
	void	printStats(int param) const;
};

#endif