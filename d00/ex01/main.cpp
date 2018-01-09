#include "Contact.class.hpp"

static	void	contactInfo(void)
{




}

void	Contact		addContact(int num)
{







}

Contact		searchContact(std::string cmd, int num)
{






}

static	void	opts(void)
{
	std::cout << "Please enter a command" << endl;
	std::cout << "Available commands" << endl;
	std::cout << "1. ADD" << endl;
	std::cout << "2. SEARCH" << endl;
}

int		main(int ac, char *av[])
{
	int	i;
	Contact	new_book[8];
	std::string command;
	
	opts();
	while (1)
	{
		getline(std::cin, command, '\n');
		if ((strstr(command, "ADD")))
			addContact(i);
		else if ((strstr(command, "SEARCH")))
			searchContact()
	return 0;
}
