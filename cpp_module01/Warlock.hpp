#pragma once

#include "ATarget.hpp"
#include <iostream>
#include <map>
#include "ASpell.hpp"

class ATarget;
class ASpell;

class Warlock
{
	private:
		Warlock();
		Warlock(const Warlock &);
		Warlock& operator=(const Warlock &);
		std::string name;
		std::string title;
		std::map<std::string, ASpell*> SpellBook;
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
