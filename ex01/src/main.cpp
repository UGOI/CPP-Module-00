#include <iostream>
#include "./include/Phonebook.hpp"

int main(int argc, char **argv)
{
	(void)argv;
	std::string user_input = "NR";
	if (argc != 1)
		std::cout << "Run the program without arguments.";
	else
	{
		Phonebook phonebook;
		while (user_input != "EXIT")
		{
			std::cout << "Enter a command: ( ADD | SEARCH | EXIT )";
			getline(std::cin, user_input);
			if (user_input == "ADD")
				phonebook.add_contact();
			else if (user_input == "SEARCH")
				phonebook.search_contact();
			else if (user_input == "EXIT")
				std::cout << "Exiting program..." << std::endl;
			else
				std::cout << "Invalid command." << std::endl;
		}
	}

	return 0;
}
