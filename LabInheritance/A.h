#pragma once
#include <iostream>

class A
{
	public:
		A();
		A(int a, std::string name, int b);
		virtual ~A();

		virtual void OutputIdentity(); //can be overriden
		virtual void Output() = 0; //pure virtual, no implementation in A, derived classes must implement

	private:
		int a;
		int b;
		int c;
		std::string name;

	protected:
		double d;
};