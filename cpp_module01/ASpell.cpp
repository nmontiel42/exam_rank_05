#include "ASpell.hpp"

ASpell::ASpell()
{
}

ASpell::ASpell(const ASpell &other)
{
	*this = other;
}

ASpell::ASpell(std::string oname, std::string oeffects) : name(oname), effects(oeffects)
{
}

ASpell& ASpell::operator=(const ASpell &other)
{
	this->name = other.name;
	this->effects = other.effects;
	return *this;
}

ASpell::~ASpell()
{
}

std::string ASpell::getName() const
{
	return this->name;
}

std::string ASpell::getEffects() const
{
	return this->effects;
}

void ASpell::launch(const ATarget &target) const
{
	target.getHitBySpell(*this);
}
