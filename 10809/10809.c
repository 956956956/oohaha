#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main() {
	int index[26];
	memset(index, -1, sizeof(index));
	char sen[100];
	scanf("%s", sen);
	for (int i = 0; i < strlen(sen); i++) {
		if (index[sen[i] - 97] == -1) {
			index[sen[i] - 97] = i;
		}
	}
	for (int i = 0; i < 26; i++) {
		printf("%d ", index[i]);
	}
}