#pragma once
#include "A.h"

class B : public A
{
	public: 
		B(int a, std::string name, int b);
		B();
		~B();
		virtual void Output();
		virtual void OutputIdentity();
};
