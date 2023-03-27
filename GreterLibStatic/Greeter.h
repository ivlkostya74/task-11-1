#pragma once
#include <iostream>

class Greeter
{
private:
	const std::string Hi = "Здравствуйте, ";
public:
	std::string greet(std::string);
};

