#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int add_digit(int x);

int main()
{
  int x;
  int result = 0;
  printf("������ �Է��Ͻÿ�: ");
  scanf("%d", &x);
  printf("�ڸ����� �� : %d", add_digit(x));

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