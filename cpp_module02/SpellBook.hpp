#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class ATarget;
class ASpell;

class SpellBook
{
	private:
		std::map<std::string, ASpell*> _spellbook;
		SpellBook(const SpellBook &);
		SpellBook& operator=(const SpellBook &);
	public:
		SpellBook();
		~SpellBook();
		void learnSpell(ASpell *);
		void forgetSpell(std::string const &);
		ASpell* createSpell(std::string const &);
};
