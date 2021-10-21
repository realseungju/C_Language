#include <stdio.h>
#define SIZE 10

void array_copy(int a[], int b[], int size);

int main()
{
	int size = SIZE;
	int i;
	int a[SIZE] = { 1,2,3,4,5 };
	int b[SIZE] = { 0 };

	for (i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
	}

	printf("\n");

	array_copy(a, b, size);
}

void array_copy(int a[], int b[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		b[i] = a[i];
		printf("%d ",b[i]);
	}

	printf("\n");
}