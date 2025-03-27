#include <stdio.h>
#include <typeinfo>

class Parent
{
public:
	virtual void PrintMe() { printf("I am Parent\n"); }
};

class Child : public Parent
{
private:
	int num;

public:
	Child(int anum) : num(anum) { }
	void PrintMe() override { printf("I am Child\n"); }
	void PrintNum() { printf("Hello Child = %d\n", num); }
};

void func(Parent *p)
{
	p->PrintMe();
	if (typeid(*p) == typeid(Child)) {
		((Child *)p)->PrintNum();
	} else {
		puts("Num not exist");
	}
}

int main()
{
	Parent p;
	Child c(5);

	func(&c);
	func(&p);
}

