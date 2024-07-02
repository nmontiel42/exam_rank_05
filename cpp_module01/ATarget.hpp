#pragma once

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
	protected:
		std::string type;
		ATarget();
		ATarget(const ATarget &);
		ATarget& operator=(const ATarget &);
	public:
		ATarget(std::string);
		virtual ~ATarget();
		std::string const &getType() const;
		virtual ATarget* clone() const = 0;
		void getHitBySpell(const ASpell &) const;
};
