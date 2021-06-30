#ifndef Enemy_HPP
# define Enemy_HPP
#include <iostream>	   // std::cout
#include <ostream>
#include <cstdlib>

class Enemy
{
    private:
        Enemy();
    protected:
        std::string _Type;
        unsigned int _HP;
    public:
        Enemy(int hp, std::string const & type);
        Enemy(Enemy const &t);
        virtual ~Enemy();
        Enemy & operator=(Enemy const &t);
        std::string const getType() const;
        int getHP() const;
        virtual void takeDamage(int val);
};

#endif