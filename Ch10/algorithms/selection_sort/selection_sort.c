#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 15

int main()
{
	srand((unsigned)time(NULL));

	int list[SIZE];
	int i,j,temp,least;

	for (i = 0; i < SIZE; i++) // rand �Լ��� �迭 list�� ���� ����
	{
		list[i] = rand() % 100 + 1;
	}

	for (i = 0; i < SIZE; i++)
	{
		least = i; // �ʱ� �ּҰ��� �迭 ù��°
		for (j = i + 1; j < SIZE; j++) //  ���� �迭���� �ּҰ��� ��
		{
			if (list[j] < list[least]) // �迭�� �ּҰ����� ������
				least = j; // �ּҰ��� �迭
		}

		temp = list[i]; // temp�� i ��° �迭 ����
		list[i] = list[least]; // list[i]�� �������� ����� list[least]�� ���� ����
		list[least] = temp; // �ּҰ��� temp
	}

	for (i = 0; i < SIZE; i++) // �迭�� ���� ���
	{
		printf("%d ", list[i]);
	}

	printf("\n");
	return 0;

}