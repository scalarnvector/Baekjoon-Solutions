#include <stdio.h>
#include <string.h>
int main() {
	char s[1000];
	int num;
	scanf("%d", &num);
	
	for (int i = 0; i < num; i++) {
 		scanf("%s", s);
 		int len = strlen(s);
 		printf("%c%c\n", s[0], s[len - 1]);
	 }    
	return 0;
}