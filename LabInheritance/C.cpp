#include "stdafx.h"
#include "C.h"

C::C()
{
}

C::~C()
{
}

C::C(int a, std::string name, int b) : A(a, name, b)
{

}

void C::Output()
{
	this->OutputIdentity();
	std::cout << "Output C is called" << std::endl;
}