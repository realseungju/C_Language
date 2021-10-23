#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main()
{
	srand((unsigned)time(NULL));

	int dice[SIZE] = { 0 };
	int i;
	int max, max_dice;

	for (i = 0; i < 100; i++)
	{
		dice[rand() % 10]++;
	}

	max = dice[0];
	
	for (i = 0; i < SIZE; i++)
	{
		printf("dice[%d] = %d 번\n", i, dice[i]);
	}

	for (i = 1; i < SIZE; i++)
	{
		if (dice[i] > max)
		{
			max = dice[i];
			max_dice = i;
		}
	}

	printf("가장 많이 나온 수는 인덱스: %d\n", max_dice);

	return 0;
}