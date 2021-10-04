#include <stdio.h>



double f(int);

void print(int n, int k) {
	int i = 0;
	while (i < n) {
		if ((i + 1) % k == 0)
		{
			++i;
			continue;
		} 
		printf("n = %d",i);
		printf(" f = %d\n", f(i));
		++i;
	}

}
