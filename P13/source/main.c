#include <stdio.h>

double Power(double x, int n) {
	double PowerXn = 1;
	for (int i = 1; i <= n; i++)
		PowerXn *= x;

	return PowerXn;
}

int main() {
	int k; double ans;
	printf("計算3.5的k次方? 請輸入k=");
	scanf_s("%d", &k);
	ans = Power(3.5, k);
	printf("3.5的%d次方=%f\n", k, ans);

	return 0;
}