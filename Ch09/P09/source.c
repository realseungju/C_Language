#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int add_digit(int x);

int main()
{
  int x;
  printf("정수를 입력하시오: ");
  scanf("%d", &x);
  printf("자리수의 합 : %d", add_digit(x));

  return 0;
}

int add_digit(int x)
{

  if (x/10 > 0)
  {
    x = x%10 + add_digit(x/10);
  }

  return x;

}
