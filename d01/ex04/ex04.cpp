#include <iostream>
#include <string>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*strPtr = &str;
	std::string	&strRef = str;
	
	std::cout << "Str: " << str << std::endl;
	std::cout << "Ptr: " << *strPtr << std::endl;
	std::cout << "Ref: " << strRef << std::endl;
	return (0);
}
