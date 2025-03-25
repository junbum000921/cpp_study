#include <stdio.h>

void divide(int a, int d)
try {
	if (d == 0) throw "Cannot divided by 0.";
	printf("Resultf = %d\n", a / d);
}
catch (const char *message) {
	puts(message);
}

int main()
{
	divide(10, 0);
}

