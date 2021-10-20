#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 15

int main()
{
	srand((unsigned)time(NULL));

	int list[SIZE];
	int i,j,temp,least;

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
	return 0;

}