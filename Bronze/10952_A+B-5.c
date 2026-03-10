#include <stdio.h>

int main() {
	int c1, c2;
	
	while (scanf("%d %d", &c1, &c2) == 2) {
		if (c1 == 0 && c2 == 0) 
			break;
		printf("%d\n", c1 + c2);
	}
	return 0;
}