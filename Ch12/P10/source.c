#include <stdio.h>
#include <string.h>

int check_palindrome(char *string);

int main()
{
	char string[100];
  int i;

	printf("문자열을 입력하시오: ");
	scanf("%s",string);

  for(i=0; string[i] != NULL; i++) 
  {
    if(string[i] >= 'A' && string[i] <= 'Z') // 대문자이면
      string[i] += 'a' - 'A'; // 소문자로
  }

	if(check_palindrome(string)==0) // 다른 글자가 없으면 화문
  {
		printf("회문입니다.");
  }
	else
  {
		printf("회문이 아닙니다."); 
  }

  return 0;
}

int check_palindrome(char *string)
{
	int i;
  int count = 0;

	for(i=0; i<strlen(string)/2; i++) // strlen은 문자열의 길이를 반환
  {
		if(string[i]==string[strlen(string)-1-i]) // 맨 뒤 NULL 빼고 확인
			count += 0;
		else
			count += 1;
	}

  return count;
}