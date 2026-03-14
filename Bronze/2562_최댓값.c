#include <stdio.h>
int main() {
	int s[9];
	int best = -101;
	int num = 0;
	
	for (int i = 0; i < 9; i++) {
		scanf("%d", &s[i]);
		if (best < s[i]) {
			best = s[i];
			num = i + 1;
		}
	}
	printf("%d\n%d", best, num);
	return 0;
}