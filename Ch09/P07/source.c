#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void show_digit(int x);

int main()
{
  int num;
  printf("정수를 입력하시오: ");
  scanf("%d", &num);
  show_digit(num);

  return 0;
}

void show_digit(int x)
{
  if (x/10 > 0)
    show_digit(x/10);

  printf("%d ",x%10);

}