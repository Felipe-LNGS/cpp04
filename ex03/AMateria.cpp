#include "AMateria.hpp"
#include "ICharacter.hpp"

 AMateria::AMateria( void ): _type("Random materia")
{
}

AMateria::AMateria( std::string const &type ): _type(type)
{
}

AMateria::AMateria( const AMateria &src ): _type(src._type)
{
}

AMateria::~AMateria()
{
}

AMateria	&AMateria::operator=( const AMateria &materia )
{
    (void)materia;
	return (*this);
}

std::string const	&AMateria::getType( void ) const
{
	return (this->_type);
}

void	AMateria::use( ICharacter &target)
{
	(void) target;
}