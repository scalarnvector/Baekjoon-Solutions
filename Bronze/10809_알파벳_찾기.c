#include <stdio.h>
#include <string.h>
//다시 풀어볼 문제
int main() {
	char s[101];
	int i, pos[26];
	
	for (i = 0; i < 26; i++)
		pos[i] = -1;
		
	scanf("%s", s);
	int len = strlen(s);
	
	for (i = 0; i < len; i++) {
		int idx = s[i] - 'a';
		
		if (pos[idx] == -1)
		pos[idx] = i;
	}
		
	for (i = 0; i < 26; i++)
		printf("%d ", pos[i]);
	
	return 0;
}