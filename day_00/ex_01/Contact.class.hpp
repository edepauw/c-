#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <iostream>       // std::cout
#include <string>         // std::string
#include <cctype>     
#include <locale>         // std::locale, std::toupper

class Contact
{
	public:
		Contact(void);
		Contact(std::string firstName, std::string lastName, std::string nickname,
					std::string login, std::string postalAdress, std::string emailAdress, \
					std::string phoneNumber, std::string birthdayDate, std::string favoriteMeal,
					std::string underwearColor, std::string darkestSecret);
		void	printContact(void) const;
		std::string		&getfName(void);
		std::string		&getlName(void);
		int		getif(void);
		std::string		&getlogin(void);
		void	fill(void);
		~Contact(void);
	private:
		int is_filled;
		std::string firstName; std::string lastName; std::string nickname;
		std::string login; std::string postalAdress; std::string emailAdress;
		std::string phoneNumber; std::string birthdayDate; std::string favoriteMeal;
		std::string underwearColor; std::string darkestSecret;
};

#endif
