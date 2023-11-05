#include <stdio.h>

long factorial(long number) {
	return number <= 1 ? 1 : number * factorial(number - 1);
}

int main() {
	for (int i = 0; i <= 10; i++) {
		printf("%2d! = %1d\n", i, factorial(i));
	}

	return 0;
}