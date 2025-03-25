#include <stdio.h>

class C
{
	int a;
public:
	C() { puts("Creator calling"); }
	~C() { puts("Destory calling"); }
};

void divide(int a, int d)
{
	if (d == 0) throw "0.";
	printf("%d.\n", a / d);
}

void calc(int t, const char *m)
{
	C c;
	divide(10, 0);
}

int main()
{
	try {
		calc(1, "calculating");
	}
	catch (const char *message) {
		puts(message);
	}
	puts("Program exit.");
}

