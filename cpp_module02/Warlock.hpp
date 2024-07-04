#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class ATarget;
class ASpell;

class Warlock
{
	private:
		Warlock();
		Warlock(const Warlock &);
		Warlock& operator=(const Warlock &);
		std::string name;
		std::string  title;
		SpellBook _spellbook;
	public:
		~Warlock();
		Warlock(std::string, std::string);
		std::string const &getName() const;
		std::string const &getTitle() const;
		void setTitle(const std::string &);
		void introduce() const;
		void learnSpell(ASpell *);
		void forgetSpell(std::string);
		void launchSpell(std::string, const ATarget &);
};

