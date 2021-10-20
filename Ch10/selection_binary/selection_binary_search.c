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

	for (i = 0; i < SIZE; i++) // rand 함수로 배열 list의 값을 받음
	{
		list[i] = rand() % 100 + 1;
	}

	for (i = 0; i < SIZE; i++)
	{
		least = i; // 초기 최소값은 배열 첫번째
		for (j = i + 1; j < SIZE; j++) //  다음 배열부터 최소값과 비교
		{
			if (list[j] < list[least]) // 배열이 최소값보다 작으면
				least = j; // 최소값은 배열
		}

		temp = list[i]; // temp에 i 번째 배열 대입
		list[i] = list[least]; // list[i]의 기존값을 지우고 list[least]의 값을 대입
		list[least] = temp; // 최소값은 temp
	}

	for (i = 0; i < SIZE; i++) // 배열의 값을 출력
	{
		printf("%d ", list[i]);
	}

	printf("\n");

	printf("탐색할 값을 입력하시오: ");
	scanf("%d", &key);
	printf("탐색 결과 = %d 번째\n", binary_search(list, SIZE, key));

	return 0;
}

int binary_search(int list[], int n, int key)
{
	int low, high, middle;

	low = 0; // 배열의 최소값
	high = n - 1; // 배열의 최대값 (배열은 0부터 시작)

	while (low <= high) // 최소값이 최대값과 작거나 같으면 반복
	{
		printf("[%d %d]\n", low, high); // 최소와 최대 배열 칸
		middle = (low + high) / 2; // 중간 값

		if (key == list[middle]) // 일치하면 탐색 완료
			return middle; //중간 값이 원하는 값

		else if (key > list[middle]) // 중간 원소보다 크다면
			low = middle + 1; // 중간의 다음 배열을 low 설정

		else // 중간 원소보다 작다면
			high = middle - 1; // 중간의 이전 배열을 high 설정

	}

	return -1;
}