#include <stdio.h>

int main() {
	int t, c1, c2;
	scanf("%d", &t);
	
	for (int i = 0; i < t; i++) {
		scanf("%d %d", &c1, &c2);
		printf("%d\n", c1 + c2);
	}

	return 0;
}