#include <stdio.h>
#include <stdlib.h>

typedef struct Address 
{
  char name[20];
  char phone[20];

}Add;

int main() 
{
    int num;
    Add *add;

    printf("주소의 개수: ");
    scanf("%d", &num);

    add = (Add *)malloc(sizeof(Add)*num);

    for (int i=0; i<num; i++)
    {
        printf("이름을 입력하시오: ");
        scanf("%s",add[i].name);

        printf("휴대폰 번호를 입력하시오: ");
        scanf("%s",add[i].phone);
    }

    printf("==============================\n");
    printf("이름 휴대폰 번호 \n");
    printf("==============================\n");

    for (int i=0; i<num; i++) 
    {
        printf("%s %s\n", add[i].name, add[i].phone);
    }

    free(add);

    return 0;
}