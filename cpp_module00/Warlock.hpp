#pragma once

#include <iostream>

class Warlock
{
	private:
		Warlock();
		Warlock(const Warlock &);
		Warlock& operator=(const Warlock &);
		std::string name;
		std::string title;
	public:
		Warlock(std::string, std::string);
		~Warlock();
		std::string const &getName() const;
		std::string const &getTitle() const;
		void setTitle(const std::string &);
		void introduce() const;
};
