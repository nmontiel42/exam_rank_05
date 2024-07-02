#include "ATarget.hpp"
#include "ASpell.hpp"

ATarget::ATarget()
{
}

ATarget::ATarget(const ATarget &other)
{
	*this = other;
}

ATarget& ATarget::operator=(const ATarget &other)
{
	this->type = other.type;
	return *this;
}

ATarget::ATarget(std::string otype) : type(otype)
{
}

ATarget::~ATarget()
{
}

std::string const &ATarget::getType() const
{
	return this->type;
}

void ATarget::getHitBySpell(const ASpell &spell) const
{
	std::cout << this->type << " has been " << spell.getEffects() << "!" << std::endl;
}
