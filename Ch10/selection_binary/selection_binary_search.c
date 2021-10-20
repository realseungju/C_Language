#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 16

int binary_search(int list[], int n, int key);

int main()
{
	srand((unsigned)time(NULL));

	int list[SIZE];
	int i, j, temp, least, key;

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

	printf("Ž���� ���� �Է��Ͻÿ�: ");
	scanf("%d", &key);
	printf("Ž�� ��� = %d ��°\n", binary_search(list, SIZE, key));

	return 0;
}

int binary_search(int list[], int n, int key)
{
	int low, high, middle;

	low = 0; // �迭�� �ּҰ�
	high = n - 1; // �迭�� �ִ밪 (�迭�� 0���� ����)

	while (low <= high) // �ּҰ��� �ִ밪�� �۰ų� ������ �ݺ�
	{
		printf("[%d %d]\n", low, high); // �ּҿ� �ִ� �迭 ĭ
		middle = (low + high) / 2; // �߰� ��

		if (key == list[middle]) // ��ġ�ϸ� Ž�� �Ϸ�
			return middle; //�߰� ���� ���ϴ� ��

		else if (key > list[middle]) // �߰� ���Һ��� ũ�ٸ�
			low = middle + 1; // �߰��� ���� �迭�� low ����

		else // �߰� ���Һ��� �۴ٸ�
			high = middle - 1; // �߰��� ���� �迭�� high ����

	}

	return -1;
}