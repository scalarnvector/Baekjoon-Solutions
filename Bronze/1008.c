#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d",&a, &b);
	double result = (double)a / b;
	printf("%.10f\n", result);
	return 0;
}