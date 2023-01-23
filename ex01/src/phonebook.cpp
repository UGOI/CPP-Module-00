#include <iostream>
#include "./include/Phonebook.hpp"

void	Phonebook::set_is_empty(bool is_empty)
{
	this->is_empty = is_empty;
}

bool	Phonebook::get_is_empty()
{
	return this->is_empty;
}


void	Phonebook::add_contact()
{
	system("clear");
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
	while (true)
	{
		std::cout << "Enter first name: ";
		getline(std::cin, first_name);
		if (first_name == "")
		{
			std::cout << "First name is empty. Try again." << std::endl;
			continue;
		}
		break;
	}
	while (true)
	{
		std::cout << "Enter last name: ";
		getline(std::cin, last_name);
		if (last_name == "")
		{
			std::cout << "Last name is empty. Try again." << std::endl;
			continue;
		}
		break;
	}
	while (true)
	{
		std::cout << "Enter nickname: ";
		getline(std::cin, nickname);
		if (nickname == "")
		{
			std::cout << "Nickname is empty. Try again." << std::endl;
			continue;
		}
		break;
	}
	while (true)
	{
		std::cout << "Enter phone number: ";
		getline(std::cin, phone_number);
		if (phone_number == "")
		{
			std::cout << "Phone number is empty. Try again." << std::endl;
			continue;
		}
		break;
	}
	while (true)
	{
		std::cout << "Enter darkest secret: ";
		getline(std::cin, darkest_secret);
		if (darkest_secret == "")
		{
			std::cout << "Dark secret is empty. Try again." << std::endl;
			continue;
		}
		break;
	}
	Contact contact(first_name, last_name, nickname, phone_number, darkest_secret);
	contacts[contact_count] = contact;
	contact_count++;
	if (contact_count >= 8)
		contact_count = 0;
}

void	Phonebook::search_contact()
{
	int index = -1;

	system("clear");
	std::cout << "     index|first name|last name |nickname" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (contacts[i].get_is_empty() == false)
		{
			set_is_empty(false);
			std::cout << "         " << i << "|";
			if (contacts[i].get_first_name().length() > 10)
				std::cout << contacts[i].get_first_name().substr(0, 9) << ".|";
			else
				std::cout << contacts[i].get_first_name() << std::string(10 - contacts[i].get_first_name().length(), ' ') << "|";
			if (contacts[i].get_last_name().length() > 10)
				std::cout << contacts[i].get_last_name().substr(0, 9) << ".|";
			else
				std::cout << contacts[i].get_last_name() << std::string(10 - contacts[i].get_last_name().length(), ' ') << "|";
			if (contacts[i].get_nickname().length() > 10)
				std::cout << contacts[i].get_nickname().substr(0, 9) << "." << std::endl;
			else
				std::cout << contacts[i].get_nickname() << std::string(10 - contacts[i].get_nickname().length(), ' ') << std::endl;
		}
	}
	if (get_is_empty() == true)
	{
		std::cout << "	No contacts to display." << std::endl;
		return ;
	}
	std::string user_input = "";
	while (!(index >= 0 && index < 8 && contacts[index].get_is_empty() == false && user_input != ""))
	{
		std::cout << "Enter index of contact to view: " << std::endl;
		getline(std::cin, user_input);
		try
		{
			index = std::stoi(user_input);
		}
		catch(const std::exception& e)
		{
			index = -1;
		}
	}

	if (index >= 0 && index < 8 && contacts[index].get_is_empty() == false)
	{
		system("clear");
		std::cout << "First name: " << contacts[index].get_first_name() << std::endl;
		std::cout << "Last name: " << contacts[index].get_last_name() << std::endl;
		std::cout << "Nickname: " << contacts[index].get_nickname() << std::endl;
		std::cout << "Phone number: " << contacts[index].get_phone_number() << std::endl;
		std::cout << "Darkest secret: " << contacts[index].get_darkest_secret() << std::endl;
	}
}
