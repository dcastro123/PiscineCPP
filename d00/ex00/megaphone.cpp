#include <iostream>
#include <cctype>
#include <string>

void	megaphone(int ac, char **av)
{
	int	i = 1;
	int	j;

	while (i < ac)
	{
		j = -1;
		while (++j < strlen(av[i]))
		{
			std::cout << (char)toupper(av[i][j]);
		}
		i++;
	}
}
	
int	main(int ac, char **av)
{
	if (ac > 1)
	{
		megaphone(ac, av);
		std::cout << "\n";
	}
	else
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	}
	return 0;
}	
