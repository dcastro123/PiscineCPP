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
	void			rangedAttack(std::string const & target);
	void			meleeAttack(std::string const & target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);

	/* random attack functions */
	void			random1(std::string const & target);
	void			random2(std::string const & target);
	void			random3(std::string const & target);
	void			random4(std::string const & target);
	void			random5(std::string const & target);

	void	vaulthunter_dot_exe(std::string const & target);

	/* Getters */
	std::string		getName(void);
	int			getRangedDmg(void);
	int			getMeleeDmg(void);
	int			getHealAmt(void);
	int			getDmg(void);
	int			getRandom1Dmg(void);
	int			getRandom2Dmg(void);
	int			getRandom3Dmg(void);
	int			getRandom4Dmg(void);
	int			getRandom5Dmg(void);

private:
	std::string		_name;
	int			_hitPoints;
	int			_maxHitPoints;
	int			_energyPoints;
	int			_maxEnergyPoints;
	int			_level;
	int			_meleeDmg;
	int			_rangedDmg;
	int			_random1Dmg;
	int			_random2Dmg;
	int			_random3Dmg;
	int			_random4Dmg;
	int			_random5Dmg;
	int			_dmgReduction;
};
#endif
