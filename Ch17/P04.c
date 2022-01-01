#include <stdio.h>
#include <stdlib.h>

int main() 
{
  char *c = get_word();

  printf("동적 메모리에 저장된 단어는 %s 입니다.", c);
}

char *get_word() // char형 포인터 get_word 함수
{
  char *s = (char *)malloc(sizeof(char)*50); // 메모리 할당

  if (s == NULL) // 할당이 안되면
  {
    printf("메모리 할당 오류\n");

    exit(1);
  }

  printf("단어를 입력하시오(최대 50글자): ");

  scanf("%s", s);

  return s;
}
