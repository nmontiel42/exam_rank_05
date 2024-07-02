#pragma once

#include <iostream>
#include <map>
#include "ATarget.hpp"

class ATarget;

class TargetGenerator
{
	private:
		TargetGenerator(const TargetGenerator &);
		TargetGenerator& operator=(const TargetGenerator &);
		std::map<std::string, ATarget *> target;
	public:
		TargetGenerator();
		~TargetGenerator();
		void learnTargetType(ATarget *);
		void forgetTargetType(std::string const &);
		ATarget* createTarget(std::string const &);
};
