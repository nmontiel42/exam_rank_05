#pragma once

#include "ATarget.hpp"
#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "SpellBook.hpp"

class ATarget;
class ASpell;
class SpellBook;

class Warlock
{
	private:
		Warlock();
		Warlock(const Warlock &);
		Warlock& operator=(const Warlock &);
		std::string name;
		std::string title;
		SpellBook	_spellbook;
	public:
		Warlock(std::string, std::string);
		~Warlock();
		std::string const &getName() const;
		std::string const &getTitle() const;
		void setTitle(const std::string &);
		void introduce() const;
		void learnSpell(ASpell *);
		void forgetSpell(std::string);
		void launchSpell(std::string, ATarget &);
};
