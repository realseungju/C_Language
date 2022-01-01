#include <stdio.h>
#include <stdlib.h>

typedef struct Address 
{

  char name[20];

  char phone[20];

}Address;

int main() 
{

  int n;

  Address *add;

  printf("주소의 개수: ");

  scanf("%d", &n);

  getchar();

  add = (Address *)malloc(sizeof(Address)*n);

  for (int i = 0; i < n; i++) 
  {
    printf("이름을 입력하시오: ");

    gets_s(add[i].name,20);

    printf("휴대폰 번호를 입력하시오: ");

    gets_s(add[i].phone, 20);
  }

  printf("==============================\n");

  printf("이름 휴대폰 번호 \n");

  printf("==============================\n");

  for (int i = 0; i < n; i++) 
  {
    printf("%s %s", add[i].name, add[i].phone);
  }

}
