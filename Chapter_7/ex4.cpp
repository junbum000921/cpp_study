#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	int num;
	int age;
	char name[128];

	try {
		printf("Enter your student number : ");
		scanf("%d", &num);
		if (num <= 0) throw num;
		try {
			printf("Enter your name : ");
			scanf("%s", name);
			if (strlen(name) < 4) throw "Too short";
			printf("Enter your age : ");
			scanf("%d", &age);
			if (age <= 0) throw age;
			printf("Info => stn:%d, name:%s, age:%d\n", num, name, age);
		}
		catch (const char *Message) {
			puts(Message);
		}
		catch (int) {
			throw;
		}
	}
	catch (int n) {
		printf("%d is minus.\n", n);
	}
}

