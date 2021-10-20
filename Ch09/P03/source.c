#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check(int password);

int main()
{
  int password;
  int i, result;

  while (1)
  {

    printf("비밀번호: ");
    scanf("%d", &password);
    printf("\n");
    result = check(password);

    if (result == 1)
      break;
    else if (result == -1)
      break;
    else
      continue;
  }

  return 0;

}

int check(int password)
{
  static int count = 0;
  int correct_pass = 1234;

  if (password == correct_pass)
  {
    return 1;
  }
  else
  {
    count++;

    if (count > 2)
    {
      printf("로그인 시도횟수 초과\n");
      return -1;
    }

    return 0;
  }
}