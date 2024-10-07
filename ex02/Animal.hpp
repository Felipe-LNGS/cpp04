#pragma once

#include <iostream>
#include <string>

const std::string RESET = "\033[0m";
const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[33m";
const std::string BLUE = "\033[34m";
const std::string MAGENTA = "\033[35m";
const std::string CYAN = "\033[36m";
const std::string WHITE = "\033[37m";
const std::string BOLD = "\033[1m";
const std::string UNDERLINE = "\033[4m";

class Animal{
	protected :
		std::string _type;

	public:
		Animal();
		Animal(const std::string &type);
		Animal(Animal const &src);
		Animal &operator=(Animal const &type);
		virtual ~Animal();
		virtual void makeSound()const = 0;
		std::string getType()const; 
};
