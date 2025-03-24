#include <stdio.h>

template <typename T>

T max(T a, T b)
{
    return a > b ? a : b;
}


int main()
{
	int a = max(1, 2);
	double b = max(1.1, 2.2);

    printf("a = %d\n", a);
    printf("b = %f\n", b);

	
}