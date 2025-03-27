#include <stdio.h>

namespace A {
	double value;
}

namespace B {
	int value;
}

int main()
{
	using namespace A;
	using namespace B;
    int value;
	value = 3;				
}

