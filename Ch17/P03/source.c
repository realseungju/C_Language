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

    printf("�ּ��� ����: ");
    scanf("%d", &num);

    add = (Add *)malloc(sizeof(Add)*num);

    for (int i=0; i<num; i++)
    {
        printf("�̸��� �Է��Ͻÿ�: ");
        scanf("%s",add[i].name);

        printf("�޴��� ��ȣ�� �Է��Ͻÿ�: ");
        scanf("%s",add[i].phone);
    }

    printf("==============================\n");
    printf("�̸� �޴��� ��ȣ \n");
    printf("==============================\n");

    for (int i=0; i<num; i++) 
    {
        printf("%s %s\n", add[i].name, add[i].phone);
    }

    free(add);

    return 0;
}