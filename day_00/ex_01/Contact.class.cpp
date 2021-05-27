#include "Contact.class.hpp"

Contact::Contact(void): firstName(""), lastName(""), nickname(""), login(""),
			postalAdress(""), emailAdress(""), phoneNumber(""),
			birthdayDate(""), favoriteMeal(""), underwearColor(""),
			darkestSecret("")
{this->is_filled = 0;}

Contact::Contact(std::string firstName, std::string lastName, std::string nickname,
			std::string login, std::string postalAdress, std::string emailAdress, \
			std::string phoneNumber, std::string birthdayDate, std::string favoriteMeal,
			std::string underwearColor, std::string darkestSecret)
			: firstName(firstName), lastName(lastName), nickname(nickname), login(login),
			postalAdress(postalAdress), emailAdress(emailAdress), phoneNumber(phoneNumber),
			birthdayDate(birthdayDate), favoriteMeal(favoriteMeal), underwearColor(underwearColor),
			darkestSecret(darkestSecret)
{this->is_filled = 1;}

Contact::~Contact(void)
{
	if(this->firstName.compare("") != 0)
		std::cout << "deleted: " << this->firstName << std::endl;
}
void	Contact::printContact(void) const{
	std::cout << "First name : " << this->firstName << std::endl;
	std::cout << "Last name : " << this->lastName << std::endl;
	std::cout << "Nickname : " << this->nickname << std::endl;
	std::cout << "Login : " << this->login << std::endl;
	std::cout << "Postal adress: " << this->postalAdress << std::endl;
	std::cout << "Email adress : " << this->emailAdress << std::endl;
	std::cout << "Phone number : " << this->phoneNumber << std::endl;
	std::cout << "Birthday date : " << this->birthdayDate << std::endl;
	std::cout << "Favorite meal : " << this->favoriteMeal << std::endl;
	std::cout << "Underwear color : " << this->underwearColor << std::endl;
	std::cout << "Darkest secret : " << this->darkestSecret << std::endl;
}
std::string &Contact::getfName( void )
{
	return(firstName);
}

std::string &Contact::getlName( void )
{
	return(lastName);
}

std::string &Contact::getlogin( void )
{
	return(login);
}

int Contact::getif( void )
{
	return(is_filled);
}

void	Contact::fill(void){
	std::cout << "First name : ";
	std::getline(std::cin, this->firstName);
	std::cout << "Last name : ";
	std::getline(std::cin, this->lastName);
	std::cout << "Nickname : ";
	std::getline(std::cin, this->nickname);
	std::cout << "Login : ";
	std::getline(std::cin, this->login);
	std::cout << "Postal adress: ";
	std::getline(std::cin, this->postalAdress);
	std::cout << "Email adress : ";
	std::getline(std::cin, this->emailAdress);
	std::cout << "Phone number : ";
	std::getline(std::cin, this->phoneNumber);
	std::cout << "Birthday date : ";
	std::getline(std::cin, this->birthdayDate);
	std::cout << "Favorite meal : ";
	std::getline(std::cin, this->favoriteMeal);
	std::cout << "Underwear color : ";
	std::getline(std::cin, this->underwearColor);
	std::cout << "Darkest secret : ";
	std::getline(std::cin, this->darkestSecret);
	std::cout << "Contact succesfully created!" << std::endl;
	this->is_filled = 1;
}
