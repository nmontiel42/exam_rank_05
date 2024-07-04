#include "Warlock.hpp"

Warlock::Warlock()
{
}

Warlock::Warlock(const Warlock &other)
{
	*this = other;
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
	for (std::map<std::string, ASpell *>::iterator it = _spellbook.begin(); it != _spellbook.end(); it++)
		delete it->second;
	_spellbook.clear();
}

Warlock::Warlock(std::string oname, std::string otitle) : name(oname), title(otitle)
{
	std::cout << this->name << ": This looks like another boring day." << std::endl;
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
		if (_spellbook.find(spell->getName()) == _spellbook.end())
				_spellbook[spell->getName()] = spell->clone();
}

void Warlock::forgetSpell(std::string spell)
{
	if (_spellbook.find(spell) != _spellbook.end())
		_spellbook.erase(_spellbook.find(spell));
}

void Warlock::launchSpell(std::string spell, const ATarget &target)
{
	if (_spellbook.find(spell) != _spellbook.end())
		_spellbook[spell]->launch(target);
}

