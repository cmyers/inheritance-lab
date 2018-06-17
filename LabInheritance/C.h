#pragma once
#include "A.h"

class C : public A
{
public:
	C(int a, std::string name, int b);
	C();
	~C();
	virtual void Output();
};