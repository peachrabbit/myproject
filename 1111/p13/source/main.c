#include<stdio.h>
#include<stdlib.h>

double power(double x, int k);
void main()
{
	int k; double ans;
	printf("計算3.5的k次方?請輸入k=");
	scanf_s("%d", &k);
	ans = power(3.5, k);
	printf("3.5的%d次方=%f\n", k, ans);
	system("pause");
}
double power(double x,int k)
{
	int i;
	double powerxn = 1;
	for (i = 1; i <= k; i++)
	{
		powerxn = powerxn * x;
	}
	return powerxn;
}