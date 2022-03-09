#ifndef DEF_WEAPON
#define DEF_WEAPON

#include <iostream>
#include <string>

class Weapon
{
	std::string m_name;
	int m_dmg;

	public:
 
	Weapon();
	Weapon(std::string name, int dmg);
	void swap(std::string name, int dmg);
	void print() const;
};

#endif