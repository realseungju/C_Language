#include <stdio.h>

char *str_upper(char *s);

int main()
{
  char string[20];

  printf("문자열을 입력하시오: ");
  scanf("%s",string);
  printf("반환된 문자열: %s",str_upper(string));

  return 0;
}

char *str_upper(char *s) // 문자열 포인터를 반환하는 함수
{
  int i;

  for(i=0; s[i]!=NULL; i++)
    s[i] += 'A' - 'a';

  return s;

}