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

		printf("연산을 입력하시오: ");
		scanf("%d %c %d", &x, &c, &y);

		if (c == '+')
		{
			count_sum++;
			result = x + y;
			printf("덧셈은 총 %d번 실행되었습니다.\n", count_sum);
			printf("연산결과:%d\n", result);
		}
		else if (c == '-')
		{
			count_sub++;
			result = x - y;
			printf("뺄셈은 총 %d번 실행되었습니다.\n", count_sub);
			printf("연산결과:%d\n", result);
		}
		else if (c == '*')
		{
			count_mul++;
			result = x * y;
			printf("곱셈은 총 %d번 실행되었습니다.\n", count_mul);
			printf("연산결과:%d\n", result);
		}
		else if (c == '/')
		{
			count_div++;
			result = x / y;
			printf("나눗셈은 총 %d번 실행되었습니다.\n", count_div);
			printf("연산결과:%d\n", result);
		}
		else
			printf("다시 입력해주세요.\n");
	}

}