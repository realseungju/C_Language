#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
static int count_sum;
static int count_sub;
static int count_mul;
static int count_div;

int x, y, result;
char c;

int main()
{
	while (1)
	{

		printf("������ �Է��Ͻÿ�: ");
		scanf("%d %c %d", &x, &c, &y);

		if (c == '+')
		{
			count_sum++;
			result = x + y;
			printf("������ �� %d�� ����Ǿ����ϴ�.\n", count_sum);
			printf("������:%d\n", result);
		}
		else if (c == '-')
		{
			count_sub++;
			result = x - y;
			printf("������ �� %d�� ����Ǿ����ϴ�.\n", count_sub);
			printf("������:%d\n", result);
		}
		else if (c == '*')
		{
			count_mul++;
			result = x * y;
			printf("������ �� %d�� ����Ǿ����ϴ�.\n", count_mul);
			printf("������:%d\n", result);
		}
		else if (c == '/')
		{
			count_div++;
			result = x / y;
			printf("�������� �� %d�� ����Ǿ����ϴ�.\n", count_div);
			printf("������:%d\n", result);
		}
		else
			printf("�ٽ� �Է����ּ���.\n");
	}

}