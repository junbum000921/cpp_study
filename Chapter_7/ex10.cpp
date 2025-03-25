#include <stdio.h>
#include "cursor.h"
#include <new>

int main()
{
	int *pi[1000] = { NULL, };
	int i;

	try {
		for (i = 0;; i++) {
			pi[i] = new int[1000000];
			if (pi[i]) {
				printf("%d allocate success!\n", i);
			} else {
				printf("%d allocate fail\n", i);
			}
			delay(10);
		}
	}
	catch (std::bad_alloc &b) {
		puts("error!");
		b.what();
	}
	for (i = 0;; i++) {
		delete[] pi[i];
	}
}

