#include "Warlock.hpp"

Warlock::Warlock()
{
}

Warlock::Warlock(const Warlock &other)
{
	*this = other;
}

Warlock::Warlock(std::string oname, std::string otitle) : name(oname), title(otitle) 
{
	std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock& Warlock::operator=(const Warlock &other)
{
	this->name = other.name;
	this->title = other.title;
	return *this;
}

Warlock::~Warlock()
{
	std::cout << this->name << ": My job here is done!" << std::endl;
}

std::string const &Warlock::getName() const
{
	return this->name;
}

std::string const &Warlock::getTitle() const
{
	return this->title;
}

void Warlock::setTitle(const std::string &otitle)
{
	this->title = otitle;
}

void Warlock::introduce() const
{
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *spell)
{
	if (spell)
		if (this->SpellBook.find(spell->getName()) == this->SpellBook.end())
			this->SpellBook[spell->getName()] = spell->clone();
}

void Warlock::forgetSpell(std::string spell)
{
	if (this->SpellBook.find(spell) != this->SpellBook.end())
		this->SpellBook.erase(this->SpellBook.find(spell));
}

void Warlock::launchSpell(std::string spell, ATarget &target)
{
	if (this->SpellBook.find(spell) != this->SpellBook.end())
		this->SpellBook[spell]->launch(target);
}

