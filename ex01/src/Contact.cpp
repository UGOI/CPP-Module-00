#include <iostream>
#include "./include/Phonebook.hpp"

void	Contact::set_first_name(std::string first_name)
{
	this->first_name = first_name;
}

std::string	Contact::get_first_name()
{
	return this->first_name;
}

void	Contact::set_last_name(std::string last_name)
{
	this->last_name = last_name;
}

std::string	Contact::get_last_name()
{
	return this->last_name;
}

void	Contact::set_nickname(std::string nickname)
{
	this->nickname = nickname;
}

std::string	Contact::get_nickname()
{
	return this->nickname;
}

void	Contact::set_phone_number(std::string phone_number)
{
	this->phone_number = phone_number;
}

std::string	Contact::get_phone_number()
{
	return this->phone_number;
}

void	Contact::set_darkest_secret(std::string darkest_secret)
{
	this->darkest_secret = darkest_secret;
}

std::string	Contact::get_darkest_secret()
{
	return this->darkest_secret;
}

void Contact::set_is_empty(bool is_empty)
{
	this->is_empty = is_empty;
}

bool Contact::get_is_empty()
{
	return this->is_empty;
}
