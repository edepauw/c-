#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <iostream>       // std::cout
#include <string>         // std::string
#include <locale>         // std::locale, std::toupper

class Contact
{
	public:
		int is_filled;
		Contact(void);
		Contact(std::string firstName, std::string lastName, std::string nickname,
					std::string login, std::string postalAdress, std::string emailAdress, \
					std::string phoneNumber, std::string birthdayDate, std::string favoriteMeal,
					std::string underwearColor, std::string darkestSecret);
		~Contact(void);

		std::string firstName; std::string lastName; std::string nickname;
		std::string login; std::string postalAdress; std::string emailAdress;
		std::string phoneNumber; std::string birthdayDate; std::string favoriteMeal;
		std::string underwearColor; std::string darkestSecret;

		void	printContact(void) const;
		void	fill(void);
};

#endif
