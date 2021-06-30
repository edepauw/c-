#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "FatMan.hpp"
#include "Character.hpp"
#include "Enemy.hpp"
#include "RadScorpion.hpp"
#include "DeathClaw.hpp"
#include "SuperMutant.hpp"

int main()
{
    {
        std::cout << std::endl << "cas d'erreur..." << std::endl  << std::endl;
        Character* me = new Character("me");
        Enemy* c = new DeathClaw();
        AWeapon* pr = new PlasmaRifle();
        me->equip(pr);
        me->equip(NULL);
        me->attack(NULL);
        std::cout << *me ;
        me->attack(c);
        std::cout << *me ;
        me->attack(c);
        std::cout << *me ;
        me->attack(c);
        std::cout << *me ;
        me->attack(c);
        std::cout << *me ;
        me->attack(c);
        std::cout << *me ;
        me->attack(c);
        std::cout << *me ;
        me->attack(c);
        std::cout << *me ;
        me->attack(c);
        std::cout << *me ;
        me->attack(c);
        std::cout << *me ;
        me->attack(c);
        delete me;
        delete c;
        delete pr;
    }
    {
        std::cout << std::endl << "derived class ajouté..." << std::endl  << std::endl;
        Character* me = new Character("me");
        Enemy* c = new SuperMutant();
        AWeapon* pr = new FatMan();
        me->equip(pr);
        me->attack(c);
        std::cout << *me ;
        me->attack(c);
        me->attack(c);
        delete me;
        // delete c;
        delete pr;
    }
    {
        std::cout << std::endl << "main de test donné..." << std::endl << std::endl;
        Character* me = new Character("me");
        std::cout << *me;
        Enemy* b = new RadScorpion();
        AWeapon* pr = new PlasmaRifle();
        AWeapon* pf = new PowerFist();
        me->equip(pr);
        std::cout << *me;
        me->equip(pf);
        me->attack(b);
        std::cout << *me;
        me->equip(pr);
        std::cout << *me;
        me->attack(b);
        std::cout << *me;
        me->attack(b);
        std::cout << *me;
        delete me;
        delete pf;
        delete pr;
        // delete b;
        return 0;
    }
}