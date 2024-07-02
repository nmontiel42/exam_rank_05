#include "SpellBook.hpp"

SpellBook::SpellBook()
{
}

SpellBook::SpellBook(const SpellBook &other)
{
	*this = other;
}

SpellBook& SpellBook::operator=(const SpellBook &other)
{
	_spellbook = other._spellbook;
	return (*this);
}

SpellBook::~SpellBook()
{
	for (std::map<std::string, ASpell*>::iterator it = _spellbook.begin(); it != _spellbook.end(); it++)
		delete it->second;
	_spellbook.clear();
}

void SpellBook::learnSpell(ASpell *spell)
{
	if (spell)
		_spellbook[spell->getName()] = spell->clone();
}

void SpellBook::forgetSpell(std::string const &spell)
{
	std::map<std::string, ASpell*>::iterator it = _spellbook.find(spell);
	if (it != _spellbook.end())
	{
		delete it->second;
		_spellbook.erase(it);
	}
}

ASpell* SpellBook::createSpell(std::string const &spell)
{
	ASpell* tmp = NULL;
	if (_spellbook.find(spell) != _spellbook.end())
		tmp = _spellbook[spell];
	return tmp;
}
