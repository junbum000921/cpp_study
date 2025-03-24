#include <stdio.h>

template <typename T1, typename T2>

T1 max(T1 a, T2 b)
{
    return a > b ? a : b;
}


int main()
{
	int a = max(1, 2);
	double b = max(1.1, 2.2);
	int c = max(2, 3.14);
    printf("a = %d\n", a);
    printf("b = %f\n", b);
    printf("c = %d\n", c);
	
}