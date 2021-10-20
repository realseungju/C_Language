#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int scores[5];
	int sum = 0;
	int i, average;
	int student = 5;

	for (i = 0; i < 5; i++)
	{
		printf("5명 학생들의 성적을 입력하시오: ");
		scanf("%d", &scores[i]);
	}

	for (i = 0; i < 5; i++)
	{
		sum += scores[i];
	}

	average = sum / student;
	printf("성적 평균 = %d\n", average);

	return 0;
}