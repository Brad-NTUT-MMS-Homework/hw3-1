#include <stdio.h>

int square(int y) {
	return y * y;
}

int main() {
	for (int i = 1; i <= 10; ++i)
		printf("%d ", square(i));

	return 0;
}

