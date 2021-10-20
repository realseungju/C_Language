#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int dice[6] = { 0 };
	srand((unsigned)time(NULL));
	
	for (int i = 0; i < 10000; i++)
	{
		++dice[rand() % 6];
	}

	printf("================\n");
	printf("¸é ºóµµ\n");
	printf("================\n");

	for (int i = 0; i < 6; i++)
	{
		printf("%3d %3d \n", i + 1, dice[i]);
	}

	return 0;
}