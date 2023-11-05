#include <stdio.h>

int maximum(int x, int y, int z) {
	int max = x;
	
	if (y > max) max = y;
	if (z > max) max = z;
	
	return max;
}

int main() {
	int num1, num2, num3;
	
	printf("Enter three integers: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("Maximum is: %d\n", maximum(num1, num2, num3));

	return 0;
}