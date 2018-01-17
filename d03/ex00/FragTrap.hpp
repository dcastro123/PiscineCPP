#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>

class FragTrap
{
public:
	/* Constructors */
	FragTrap(void);
	~FragTrap(void);
	FragTrap::FragTrap(std::string name);

	/* Operator */
	FragTrap	&	FragTrap::operator=(FragTrap const &rhs);

	/* various attack functions */
	void					rangedAttack(std::string const & target);
	void					meleeAttack(std::string const & target);
	void					takeDamage(unsigned int amount);
	void					beRepaired(unsigned int amount);

	/* random attack functions */
	void					random1(std::string const & target);
	void					random2(std::string const & target);
	void					random3(std::string const & target);
	void					random4(std::string const & target);
	void					random5(std::string const & target);
	void					vaulthunter_dot_exe(std::string const & target);

	/* Getters */
	std::string				getName(void);
	unsigned int			getRangedDmg(void);
	unsigned int			getMeleeDmg(void);
	unsigned int			getHitPoints(void);
	unsigned int			getRandom1Dmg(void);
	unsigned int			getRandom2Dmg(void);
	unsigned int			getRandom3Dmg(void);
	unsigned int			getRandom4Dmg(void);
	unsigned int			getRandom5Dmg(void);

private:
	std::string				_name;
	unsigned int			_hitPoints;
	unsigned int			_maxHitPoints;
	unsigned int			_energyPoints;
	unsigned int			_maxEnergyPoints;
	unsigned int			_level;
	unsigned int			_meleeDmg;
	unsigned int			_rangedDmg;
	unsigned int			_random1Dmg;
	unsigned int			_random2Dmg;
	unsigned int			_random3Dmg;
	unsigned int			_random4Dmg;
	unsigned int			_random5Dmg;
	unsigned int			_dmgReduction;
};
#endif
