#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int summ(int num);

int main()
{
	int num;
	printf("정수를 입력하시오: ");
	scanf("%d", &num);
	printf("1부터 %d까지의 합 = %d ",num, summ(num)+1);
	return 0;
}

int summ(int num)
{
	if (num > 1)
	{
		return num + summ(num-1);
	}
	else
	{
		return 0;
	}

}