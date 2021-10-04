#include <stdio.h>


double f(int);

double summ2(double eps) {
	double sum = 0;
	double a = 0;
	int i = 0;
	a = f(i);
	for (i; abs(a) > eps; i++) {
		a = f(i);
		sum += a;
	}
	return sum;
}
