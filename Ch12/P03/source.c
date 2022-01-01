#include <stdio.h>

int str_chr(char *s, char c);

int main()
{
  char string[20];
  char c;

  printf("문자열을 입력하시오: ");
  gets(string);

  printf("개수를 셀 문자를 입력하시오: ");
  scanf("%c",&c);

  printf("%c의 개수: %d",c,str_chr(string,c));

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