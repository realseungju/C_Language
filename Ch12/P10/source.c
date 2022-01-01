#include <stdio.h>
#include <string.h>

int check_palindrome(char *string);

int main()
{
	char string[100];
  int i;

	printf("���ڿ��� �Է��Ͻÿ�: ");
	scanf("%s",string);

  for(i=0; string[i] != NULL; i++) 
  {
    if(string[i] >= 'A' && string[i] <= 'Z') // �빮���̸�
      string[i] += 'a' - 'A'; // �ҹ��ڷ�
  }

	if(check_palindrome(string)==0) // �ٸ� ���ڰ� ������ ȭ��
  {
		printf("ȸ���Դϴ�.");
  }
	else
  {
		printf("ȸ���� �ƴմϴ�."); 
  }

  return 0;
}

int check_palindrome(char *string)
{
	int i;
  int count = 0;

	for(i=0; i<strlen(string)/2; i++) // strlen�� ���ڿ��� ���̸� ��ȯ
  {
		if(string[i]==string[strlen(string)-1-i]) // �� �� NULL ���� Ȯ��
			count += 0;
		else
			count += 1;
	}

  return count;
}