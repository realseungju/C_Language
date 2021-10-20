#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char choice_yn;
	int choice_seat;
	int seats[10] = { 0 };

	while (1)
	{
		printf("좌석을 예약하시겠습니까? (y 또는 n) : ");
		scanf(" %c", &choice_yn);

		if (choice_yn == 'n')
		{
			break;
		}
		else if (choice_yn == 'y')
		{
			printf("\n---------------------------\n");
			printf(" 1 2 3 4 5 6 7 8 9 10 \n");
			printf("---------------------------\n");

			for (int i = 0; i < 10; i++)
			{
				printf(" %d", seats[i]);
			}

			printf("\n");

			printf("몇 번째 좌석을 예약하시겠습니까? : ");
			scanf("%d", &choice_seat);

			if (seats[choice_seat - 1] == 0)
			{
				printf("예약되었습니다.\n");
				seats[choice_seat - 1] = 1;
			}
			else
			{
				printf("이미 예약된 자리입니다.\n");
			}

		}
		else
			printf("y 또는 n 만 입력해주세요.\n");
		
	}

	return 0;
}