#include <stdio.h>

int str_chr(char *s, char c);

int main()
{
  char string[20];
  char c;

  printf("���ڿ��� �Է��Ͻÿ�: ");
  gets(string);

  printf("������ �� ���ڸ� �Է��Ͻÿ�: ");
  scanf("%c",&c);

  printf("%c�� ����: %d",c,str_chr(string,c));

  return 0;

}

int str_chr(char *s, char c)
{
  int i = 0;
  int count = 0;

  for(i=0; i<10; i++)
  {
    if (s[i] == c)
      count++;
  }

  return count;
}