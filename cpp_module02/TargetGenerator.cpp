#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{
}

TargetGenerator::TargetGenerator(const TargetGenerator &other)
{
	*this = other;
}

TargetGenerator& TargetGenerator::operator=(const TargetGenerator &other)
{
	target = other.target;
	return (*this);
}

TargetGenerator::~TargetGenerator()
{
}

void TargetGenerator::learnTargetType(ATarget *otarget)
{
	if (otarget)
		target[otarget->getType()] = otarget;
}

void TargetGenerator::forgetTargetType(std::string const &otarget)
{
	if (target.find(otarget) != target.end())
		target.erase(target.find(otarget));
}

ATarget* TargetGenerator::createTarget(std::string const &otarget)
{
	ATarget* tmp = NULL;
	if (target.find(otarget) != target.end())
		tmp = target[otarget];
	return tmp;
}

