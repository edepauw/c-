#ifndef MURLOC_HPP
# define MURLOC_HPP

#include "Victim.hpp"
class Murloc : public Victim
{
	public:
		Murloc( Murloc const & c);
		Murloc( std::string name);
		Murloc& operator=(Murloc const & c);
		virtual void getPolymorphed( void ) const;
		virtual ~Murloc(void);
	private:
		Murloc(void);
};
#endif
