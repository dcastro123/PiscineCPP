#include "Contact.hpp"

static	void	contactInfo(void)
{




}

Contact		addContact(int num)
{







}

static	void	cmdOpts(void)
{
	std::cout << "Please enter a command" << endl;
	std::cout << "Available commands:" << endl;
	std::cout << "1. ADD" << endl;
	std::cout << "2. SEARCH" << endl;
	std::cout << "3. EXIT" << endl;
}

int		main(int ac, char *av[])
{
	int	i;
	Contact	newBook[8];
	std::string command;
	
	cmdOpts();
	i = 0;
	while (1)
	{
		getline(std::cin, command, '\n');
		if ((command.compare("ADD") == 0) && i < 8)
			newBook[i++] = addContact(i);
		else if (command.compare("SEARCH") == 0)
		{
			if (i > 0)
				searchContact();
			else
				std::cout << "Oh no! phonebook is empty :(" << endl;
		}
		else
			break;
	}
	return 0;
}
