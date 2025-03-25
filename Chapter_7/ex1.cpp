#include <stdio.h>

int main()
{
	int a, b;

	try {
		printf("Enter the number to be divided : ");
		scanf("%d", &a);
		if (a < 0) throw a;
		printf("Enter the number to divide : ");
		scanf("%d", &b);
		if (b == 0) throw "Cannot be divided by Zero.";
		printf("Result :  %d\n", a / b);
	}
	catch (int a) {
		printf("%d is under 0\n", a);
	}
	catch (const char *message) {
		puts(message);
	}
}

