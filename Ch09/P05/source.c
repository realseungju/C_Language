#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int summ(int num);

int main()
{
	int num;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num);
	printf("1���� %d������ �� = %d ",num, summ(num)+1);
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