#include  "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	return ;
}

FragTrap::~FragTrap(void)
{
	return ;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "Jack: " << name << "-- start bootup sequence. " << endl; 
	std::cout << name << ": Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!" << endl;
	std::cout << "Jack: No no no no! Cancel directive three!"
	std::cout << name << ": Commencing directive three! Uhntssuhntssuhntss--"
	std::cout << "Jack: Ugh, friggin' hate that guy." << endl;
	std::cout << name << "(commenting): Ahh -- one of my very first startup sequences! The memories..." << endl;

	this->_name = name;
	this->_maxHitPoints = 100;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeDmg = 30;
	this->_rangedDmg = 20;
	this->_random1Dmg = std::rand() % 100;
	this->_random2Dmg = std::rand() % 100;
	this->_random3Dmg = std::rand() % 100;
	this->_random4Dmg = std::rand() % 100;
	this->_random5Dmg = std::rand() % 100;


}

FragTrap &	FragTrap::operator=(FragTrap const &rhs)
{
	this->_name = rhs._name;
	this->_maxHitPoints = rhs._maxHitPoints;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_maxEnergyPoints = rhs._maxEnergyPoints;
	this->_level = _level;
	this->_meleeDmg = _meleeDmg;
	this->_rangedDmg = _rangedDmg;
	this->_random1Dmg = _random1Dmg;
	this->_random2Dmg = _random2Dmg;
	this->_random3Dmg = _random3Dmg;
	this->_random4Dmg = _random4Dmg;
	this->_random5Dmg = _random5Dmg;
}

void	rangedAttack(std::string const & target)
{
	
}
