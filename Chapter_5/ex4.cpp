#include <stdio.h>

class Base
{
private:
	char *B_buf;
public:
	Base() { B_buf = new char[10]; puts("Base create"); }
	virtual ~Base() { delete[] B_buf; puts("Base destory"); }
};

class Derived : public Base
{
private:
	int *D_buf;
public:
	Derived() { D_buf = new int[32]; puts("Derived create"); }
	virtual ~Derived() { delete[] D_buf; puts("Derived destory"); }
};

int main()
{   Base *pB;

    pB= new Derived;
    delete pB;
	
}

