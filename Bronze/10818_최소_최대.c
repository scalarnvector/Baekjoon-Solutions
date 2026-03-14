#include <stdio.h>
int main() {
	int num, temp;
	int best = -1000001;
	int min = 1000001;
	scanf("%d", &num);
	
	for (int i = 0; i < num; i++) {
		scanf("%d", &temp);
		if (best < temp)
			best = temp;
		if (min > temp)
			min = temp;
	}
	printf("%d %d\n", min, best);
	return 0;
}