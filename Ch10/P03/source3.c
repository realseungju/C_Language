#include <stdio.h>

int array_equal(int a[], int b[], int size);

int main()
{
	int equal;
	int a[5] = { 1,2,3,4,5 };
	int b[5] = { 1,2,3,4,5 };

	equal = array_equal(a, b, 5);

	if (equal == 1)
		printf("두 정수 배열의 값은 같습니다.\n");
	else
		printf("두 정수 배열의 값은 다릅니다.\n");

	return 0;
}

int array_equal(int a[], int b[], int size) 
{
	for (int i = 0; i < size; ++i) 
	{
		if (a[i] != b[i])
			return 0;
	}

	return 1;
}