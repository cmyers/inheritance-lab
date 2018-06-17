#include "stdafx.h"
#include "A.h"
#include <string>

A::A() {}

A::~A() {}

//best practise constructor over initialiser list?
A::A(int a, std::string name, int b)
{
	this->a = a;
	this->name = name;
	this->b = b;
}

////constructor initialiser list
//A::A(int a, std::string name, int b) :
//	a{ a }, name{ name }, b{ b }
//{
//}

void A::OutputIdentity()
{
	std::cout << "I am ";
	std::cout << this->name << std::endl;
	std::cout << "My values are: a: " << a << " and b: " << b << std::endl;;
}