#include <stdio.h>

int main() {
	int c1, c2;
	// scanf에서 2개를 정상적으로 입력받을때까지 체크
	while (scanf("%d %d", &c1, &c2) == 2) {
		printf("%d\n", c1 + c2);
	}
	
	return 0;
}