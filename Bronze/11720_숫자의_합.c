#include <stdio.h>
int main() {
	int num, sum = 0;
	char s[101];
	
	scanf("%d", &num);
	scanf("%s",s);
	
	for (int i = 0; i < num; i++)
		sum += (s[i] - '0');
		
	printf("%d", sum);
	return 0;
}