#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

class Contact
{
	private:
		std::string	first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
		bool		is_empty;
	public:
		Contact(){
			set_first_name("NR");
			set_last_name("NR");
			set_nickname("NR");
			set_phone_number("NR");
			set_darkest_secret("NR");
			set_is_empty(true);
		};
		Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret){
			set_first_name(first_name);
			set_last_name(last_name);
			set_nickname(nickname);
			set_phone_number(phone_number);
			set_darkest_secret(darkest_secret);
			set_is_empty(false);
		};
		void set_first_name(std::string first_name);
		void set_last_name(std::string last_name);
		void set_is_empty(bool is_empty);
		void set_nickname(std::string nickname);
		void set_phone_number(std::string phone_number);
		void set_darkest_secret(std::string darkest_secret);
		std::string get_first_name();
		std::string get_last_name();
		std::string get_nickname();
		std::string get_phone_number();
		std::string get_darkest_secret();
		bool		get_is_empty();
};

#endif
