#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void display_arr(int arr[3][3]);

int main()
{

    char word;
    int sik_count = 0;
    int gang_count = 0;
    int ga_count = 0;
    int hu_count = 0;

    while(1)
    {
        display_arr();

        scanf("%s",&word);

        if(sik_count > 3)
        {
            printf("'��'�̶�� �ܾ 3�� �̻� ����� �� �����ϴ�.\n");
        }
        if(gang_count > 3)
        {
            printf("'��'�̶�� �ܾ 3�� �̻� ����� �� �����ϴ�.\n");
        }
        if(ga_count > 3)
        {
            printf("'��'��� �ܾ 3�� �̻� ����� �� �����ϴ�.\n");
        }
        if(hu_count > 3)
        {
            printf("'��'��� �ܾ 3�� �̻� ����� �� �����ϴ�.\n");
        }

        if(word == "��ǻ��")
        {
            printf("�����Դϴ�!\n");
        }
        if(word == "����")
        {
            printf("�����Դϴ�!\n");
        }
    }

    return 0;
}

void display_arr(int arr[3][3])
{
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}