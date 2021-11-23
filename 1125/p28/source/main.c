#include<stdio.h>
#include<stdlib.h>
#define size 5

void modifyarray(int b[], int s);
void modifyelement(int e);

int main()
{
	int a[size] = { 0,1,2,3,4 };
	int i;

	printf("effects of passing entire array by reference:\n\nthe value of the original array are:\n");

	for (i = 0; i < size; i++)
	{
		printf("%3d", a[i]);
	}
	printf("\n");

	modifyarray(a, size);
	printf("the value of modified array are:\n");
	for (i = 0; i < size; i++)
	{
		printf("%3d", a[i]);
	}

	printf("\n\neffects of passing array element by value:\n\nthe value of a[3] is:%d\n",a[3]);

	modifyelement(a[3]);
	printf("the value of a[3] is:%d\n", a[3]);
	system("pause");
	return 0;
}
void modifyarray(int b[], int s)
{
	int j;
	for (j = 0; j < size; j++)
		b[j] *= 2;
}
void modifyelement(int e)
{
	printf("value in modifyelement is %d\n", e * 2);
}