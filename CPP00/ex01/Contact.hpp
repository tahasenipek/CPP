#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact{
    private:
		std::string name;
		std::string surname;
		std::string nickname;
		std::string number;
		std::string secret;
	public:
		void setName(std::string name);
		void setSurname(std::string surname);
		void setNickname(std::string nickname);
		void setNumber(std::string number);
		void setSecret(std::string secretinfo);
};


#endif
