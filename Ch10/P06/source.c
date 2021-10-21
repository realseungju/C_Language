#include <stdio.h>
#define ROW 3
#define COL 5

int main()
{
	int array[ROW][COL] = {
		{ 12, 56, 32, 16, 98 },
		{ 99, 56, 34, 41, 3 },
		{ 65, 3, 87, 78, 21 }
	};

	int i,j; // i는 row j는 col
	int sum = 0;

	for (i = 0; i < ROW; i++)
	{
		sum = 0; // 초기화
		for (j = 0; j < COL; j++)
		{
			sum += array[i][j];
		}
		printf("%d행의 합계: %d\n",i, sum);
	}

	for (j = 0; j < COL; j++)
	{
		sum = 0; //초기화
		for (i = 0; i < ROW; i++)
		{
			sum += array[i][j];
		}
		printf("%d열의 합계: %d\n",j, sum);
	}


	return 0;
}