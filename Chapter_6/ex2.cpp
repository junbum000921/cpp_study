#include <stdio.h>

template <typename T>
void swap(T &a, T &b)
{
	T t;
	t = a; a = b; b = t;
}

int main()
{
	int a = 3, b = 4;
	double c = 1.2, d = 3.4;
	char e = 'e', f = 'f';
    char *g = "hello", *h = "world";
	swap(a, b);
	swap(c, d);
	swap(e, f);
    swap(g, h);
	printf("a = %d,b = %d\n", a, b);
	printf("c = %f,d = %f\n", c, d);
	printf("e = %c,f = %c\n", e, f);
    printf("g = %s,h = %s\n", g, h);
    return 0;
}

