#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
// 1부터 100까지 생성 후 최대값 최소값 구하기
void random(int array[SIZE]);
int get_max(int array[SIZE]);
int get_min(int array[SIZE]);

int main()
{
	srand((unsigned)time(NULL));

	int array[10];
	int max, min;

	random(array);
	printf("최대값은 %d\n",get_max(array));
	printf("최소값은 %d\n",get_min(array));
}

void random(int array[]) // 배열은 원본을 가져가서 수정
{
	for (int i = 0; i < SIZE; i++)
	{
		array[i] = rand()%100+1;
		printf("%d ", array[i]);
	}

	printf("\n");
}

int get_max(int array[])
{
	int max = array[0];

	for (int i = 1; i < SIZE; i++)
	{
		if (max < array[i])
			max =  array[i];
	}
	return max;
}

int get_min(int array[])
{
	int min = array[0];

	for (int i = 1; i < SIZE; i++)
	{
		if (min > array[i])
			min = array[i];
	}
	return min;
}