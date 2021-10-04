#include <stdio.h>



double f(int);

void print(int n, int k) {
	int i = 0;
	if (i >= n) {
		return;
	}
	else {
		do {
			if ((i + 1) % k == 0)
			{
				i++;
				continue;
			}
			else {
				printf("n = %d", i);
				printf(" f = %d\n", f(i));
			}
			i++;
		} while (i < n);
	}
}
