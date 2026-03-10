#include <stdio.h>

int main() {
	long long n, m;
	scanf("%lld %lld", &n, &m);
	
	long long dif = n - m;
	
	if (dif < 0)
		dif = -dif;
		  
	printf("%lld", dif);
	
	return 0;
}