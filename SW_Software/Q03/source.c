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
            printf("'식'이라는 단어를 3번 이상 사용할 수 없습니다.\n");
        }
        if(gang_count > 3)
        {
            printf("'강'이라는 단어를 3번 이상 사용할 수 없습니다.\n");
        }
        if(ga_count > 3)
        {
            printf("'가'라는 단어를 3번 이상 사용할 수 없습니다.\n");
        }
        if(hu_count > 3)
        {
            printf("'휴'라는 단어를 3번 이상 사용할 수 없습니다.\n");
        }

        if(word == "컴퓨터")
        {
            printf("정답입니다!\n");
        }
        if(word == "가식")
        {
            printf("정답입니다!\n");
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