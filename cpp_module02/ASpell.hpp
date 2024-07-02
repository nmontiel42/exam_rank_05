#pragma once

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
	protected:
		std::string name;
		std::string effects;
		ASpell();
		ASpell(const ASpell &);
		ASpell& operator=(const ASpell &);
	public:
		ASpell(std::string, std::string);
		virtual ~ASpell();
		std::string getName() const;
		std::string getEffects() const;
		virtual ASpell* clone() const = 0;
		void launch(const ATarget &) const;
};
