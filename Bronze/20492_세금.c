#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	
	int r1 = n * 78 / 100;
	double r2 = n - (n * 20 / 100 * 22 / 100);
	
	printf("%.f %.f", r1, r2);
	return 0;
}