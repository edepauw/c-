

#include "AssaultTerminator.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"

int			main( void )
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new TacticalMarine;

	ISquad* vlc = new Squad;
	ISquad* plc = new Squad;
	plc = vlc;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); i++)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	return 0;
}
