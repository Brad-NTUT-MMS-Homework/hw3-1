#include <stdio.h>
#include <string.h>

int main() {
	char string1[60] = "Welcome", string2[60];
	int len;

	strcpy_s(string2, sizeof(char) * 60, string1);
	printf("string2=%s\n", string2);

	len = strlen(string2);
	printf("字串長度為%d\n", len);

	return 0;
}