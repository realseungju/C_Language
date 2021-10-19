#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_dice_face();

int main()
{
	srand((unsigned)time(NULL)); // 난수 발생 초기화

	get_dice_face(); 

	return 0;
}

int get_dice_face()
{
	static int c1, c2, c3, c4, c5, c6;
	int c;
	
	for (int i = 0; i < 100; i++)
	{
		c = rand() % 6 + 1;

		if (c == 1)
			c1++;
		else if (c == 2)
			c2++;
		else if (c == 3)
			c3++;
		else if (c == 4)
			c4++;
		else if (c == 5)
			c5++;
		else if (c == 6)
			c6++;
	}

	printf("1 ==> %d\n", c1);
	printf("2 ==> %d\n", c2);
	printf("3 ==> %d\n", c3);
	printf("4 ==> %d\n", c4);
	printf("5 ==> %d\n", c5);
	printf("6 ==> %d\n", c6);
}