#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5

int main()
{
	int scores[SIZE];

	srand((unsigned int)time(NULL));
	for (int i = 0; i < SIZE; i++)
		scores[i] = rand() % 100; // 0부터 99 사이에 있는 수를 랜덤하게 실행

	for (int i = 0; i < SIZE; i++)
		printf("scores[%d] = %d\n", i, scores[i]);
	return 0;
}