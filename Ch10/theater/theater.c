#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char choice_yn;
	int choice_seat;
	int seats[10] = { 0 };

	while (1)
	{
		printf("�¼��� �����Ͻðڽ��ϱ�? (y �Ǵ� n) : ");
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

			printf("�� ��° �¼��� �����Ͻðڽ��ϱ�? : ");
			scanf("%d", &choice_seat);

			if (seats[choice_seat - 1] == 0)
			{
				printf("����Ǿ����ϴ�.\n");
				seats[choice_seat - 1] = 1;
			}
			else
			{
				printf("�̹� ����� �ڸ��Դϴ�.\n");
			}

		}
		else
			printf("y �Ǵ� n �� �Է����ּ���.\n");
		
	}

	return 0;
}