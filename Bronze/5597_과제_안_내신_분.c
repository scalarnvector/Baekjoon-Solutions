#include <stdio.h>
int main() {
	int n[31] = {0};
	int temp;
	
	for (int i = 0; i < 28; i++) {
		scanf("%d", &temp);
		n[temp] = 1;
	}
	for (int i = 1; i <= 30; i++) {
		if (!n[i])
		printf("%d\n", i);
	}
	return 0;
}