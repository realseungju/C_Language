#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int scores[5];
	int sum = 0;
	int i, average;
	int student = 5;

	for (i = 0; i < 5; i++)
	{
		printf("5�� �л����� ������ �Է��Ͻÿ�: ");
		scanf("%d", &scores[i]);
	}

	for (i = 0; i < 5; i++)
	{
		sum += scores[i];
	}

	average = sum / student;
	printf("���� ��� = %d\n", average);

	return 0;
}