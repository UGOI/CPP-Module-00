#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include "./Contact.hpp"

class Phonebook
{
	private:
		Contact contacts[8];
		int		contact_count;
		bool	is_empty;
	public:
		void add_contact();
		void search_contact();
		Phonebook(){
			contact_count = 0;
			is_empty = true;
		};
	void set_is_empty(bool is_empty);
	bool get_is_empty();
};

#endif
