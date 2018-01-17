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
	return ;
}

FragTrap &	FragTrap::operator=(FragTrap const &rhs)
{
	this->_name = rhs._name;
	this->_maxHitPoints = rhs._maxHitPoints;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_maxEnergyPoints = rhs._maxEnergyPoints;
	this->_level = rhs._level;
	this->_meleeDmg = rhs._meleeDmg;
	this->_rangedDmg = rhs._rangedDmg;
	this->_random1Dmg = rhs._random1Dmg;
	this->_random2Dmg = rhs._random2Dmg;
	this->_random3Dmg = rhs._random3Dmg;
	this->_random4Dmg = rhs._random4Dmg;
	this->_random5Dmg = rhs._random5Dmg;
	return (*this);
}

void	rangedAttack(std::string const & target)
{
	std::cout << this->_name << "uses ranged attack against: " << target\
	" for " this->_rangedDmg << " damage" << endl;

	return ;

}

void	meleeAttack(std::string const & target)
{
	std::cout << this->_name << "uses melee attack against: " << target\
	" for " this->_meleeDmg << " damage" << endl;

	return ;
}

void	takeDamage(unsigned int amount)
{
	std::cout << "I'm hit!!!" << endl;
	if (this->_hitPoints <= amount - this->_dmgReduction)
	{
		this->_hitPoints = 0;
		std::cout << "go on without me...." << endl;
	}
	else
	{
		this->_hitPoints = this->_hitPoints - (amount - this->_dmgReduction);
		std::cout << "I'm still alive!" << endl;
	}
	std::cout << "Current hitpoints are: " << this->_hitPoints << std::endl;
	return ;
}

void	beRepaired(unsigned int amount)
{
	std::cout << "Healing!!" << std::endl;
	if (amount > this->_maxHitPoints)
		this->_hitPoints = this->_maxHitPoints;
	else
		this->_hitPoints += amount;
	std::cout << "Ahh much better, i healed for " << amount << endl;
	return ;
}

void	random1Attack(std::string const & target)
{
	std::cout << this->_name << "uses melee attack against: " << target\
	" for " this->_random1Dmg << " damage" << endl;

	return ;
}

void	random2Attack(std::string const & target)
{
	std::cout << this->_name << "uses melee attack against: " << target\
	" for " this->_random2Dmg << " damage" << endl;

	return ;
}

void	random3Attack(std::string const & target)
{
	std::cout << this->_name << "uses melee attack against: " << target\
	" for " this->_random3Dmg << " damage" << endl;

	return ;
}

void	random4Attack(std::string const & target)
{
	std::cout << this->_name << "uses melee attack against: " << target\
	" for " this->_random4Dmg << " damage" << endl;

	return ;
}

void	random5Attack(std::string const & target)
{
	std::cout << this->_name << "uses melee attack against: " << target\
	" for " this->_random5Dmg << " damage" << endl;

	return ;
}

void	valthunter_dot_exe(std::string const & target)
{
	int	rand = std::rand() % 5;
	if (this->_energyPoints <= 24)
		std::cout << "not enough energy!!" << endl;
	else
	{
		std::cout << "Time to play attack roulette!" << endl;
		srand(time(NULL));
		this->_energyPoints -= 25;
		if (rand == 0)
			FragTrap::random1Attack(target);
		else if (rand == 1)
			FragTrap::random2Attack(target);
		else if (rand == 3)
			FragTrap::random3Attack(target);
		else if (rand == 4)
			FragTrap::random4Attack(target);
		else if (rand == 5)
			FragTrap::random5Attack(target);
	}
	return ;
}

std::string		getName(void)
{
	return (this->_name);
}

unsigned int	getRangedDmg(void)
{
	return (this->_rangedDmg);
}

unsigned int	getMeleeDmg(void)
{
	return (this->_rangedDmg);
}

unsigned int	getHitPoints(void)
{
	return (this->_hitPoints);
}

unsigned int	getRandom1Dmg(void)
{
	return (this->_random1Dmg);
}

unsigned int	getRandom2Dmg(void)
{
	return (this->_random2Dmg);
}
unsigned int	getRandom3Dmg(void)
{
	return (this->_random3Dmg);
}
unsigned int	getRandom4Dmg(void)
{
	return (this->_random4Dmg);
}
unsigned int	getRandom5Dmg(void)
{
	return (this->_random5Dmg);
}














