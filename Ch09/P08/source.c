#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int count_digit(int num);

int main()
{
  int num;
  printf("정수를 입력하시오: ");
  scanf("%d",&num);
  printf("자리수의 개수 : %d\n", count_digit(num));

  return 0;
}

int count_digit(int num)
{
  static int count = 1;
  
  if (num / 10 > 0)
  {
    count++;
    count_digit(num/10);
  }

  return count;
}