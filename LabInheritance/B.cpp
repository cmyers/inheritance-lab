#include "stdafx.h"
#include "B.h"

B::B()
{
}

B::~B()
{
}

B::B(int a, std::string name, int b) : A(a, name, b)
{
	
}

void B::OutputIdentity()
{
	A::OutputIdentity();
	std::cout << "OutputIdentity B is overriden" << std::endl;
}

void B::Output()
{
	this->OutputIdentity();
	std::cout << "Output B is called" << std::endl;
}