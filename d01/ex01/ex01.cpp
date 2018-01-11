void	memoryLeak()
{
	std::string*	panthere;
	panthere = new std::string("String panthere");

	std::cout << *panthere << std::endl;
	delete panthere;
}
