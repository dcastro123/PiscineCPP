#ifndef	PONY_HPP
# define PONY_HPP

# include <string>
# include <iostream>

class	Pony
{
	public:
		Pony();
		~Pony();
		void	setBreed(std::string);
		void	setName(std::string);
		void	setColor(std::string);
		std::string	getBreed(void);
		std::string	getName(void);
		std::string	getColor(void);
	
	private:
		std::string	_breed;
		std::string	_name;
		std::string	_color;
};
#endif
