#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"

class ASpell;

class SpellBook
{
	private:
		SpellBook(const SpellBook &);
		SpellBook& operator=(const SpellBook &);
		std::map<std::string, ASpell*> _spellbook;
	public:
		SpellBook();
		~SpellBook();
		void learnSpell(ASpell *);
		void forgetSpell(std::string const &);
		ASpell* createSpell(std::string const &);
};
