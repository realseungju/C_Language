#include <stdio.h>

char *str_upper(char *s);

int main()
{
  char string[20];

  printf("���ڿ��� �Է��Ͻÿ�: ");
  scanf("%s",string);
  printf("��ȯ�� ���ڿ�: %s",str_upper(string));

  return 0;
}

char *str_upper(char *s) // ���ڿ� �����͸� ��ȯ�ϴ� �Լ�
{
  int i;

  for(i=0; s[i]!=NULL; i++)
    s[i] += 'A' - 'a';

  return s;

}