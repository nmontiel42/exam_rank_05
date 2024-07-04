#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class ASpell;
class ATarget;

class TargetGenerator
{
	private:
		std::map<std::string, ATarget*> _target;
		TargetGenerator(const TargetGenerator &);
		TargetGenerator& operator=(const TargetGenerator &);
	public:
		TargetGenerator();
		~TargetGenerator();
		void learnTargetType(ATarget *);
		void forgetTargetType(std::string const &);
		ATarget* createTarget(std::string const &);
};

