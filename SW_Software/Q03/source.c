#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define A_MAX 4

int main()
{
    char sample[3][3][10] = {
        {"컴","가","전"},
        {"휴","퓨","식"},
        {"강","개","터"}
    };

    char answer[A_MAX][3][10] = {
    {"컴퓨터","터가","가식"},
    {"식터","식전","가전"},
    {"개강","강터","휴강"},
    {"휴식","휴가","터전"}
    };

    char count_char[4][1][10] = {
        {"식"},
        {"강"},
        {"가"},
        {"휴"}
    };

    char word[30]; // 입력을 받을 문자열 정의
    int correct = 0;
    int count[4] = {0}; // 인덱스 차례로 식,강,가,휴 카운트
    int index;
    char *p;
    int loc;

    while(correct < 7)
    {
        for (int i=0; i<3; i++)
        {
            for (int j=0; j<3; j++)
                printf("%s ",sample[i][j]);
            printf("\n");
        }

        scanf("%s",word);

        if(count[0] > 3)
        {
            printf("'식'이라는 단어를 3번 이상 사용할 수 없습니다.\n");
            continue;
        }
        if(count[1] > 3)
        {
            printf("'강'이라는 단어를 3번 이상 사용할 수 없습니다.\n");
            continue;
        }
        if(count[3] > 3)
        {
            printf("'가'라는 단어를 3번 이상 사용할 수 없습니다.\n");
            continue;
        }
        if(count[4] > 3)
        {
            printf("'휴'라는 단어를 3번 이상 사용할 수 없습니다.\n");
            continue;
        }

        for (int i=0; i<A_MAX; i++)
        {
            for (int j=0; j<3; j++)
            {
                if(strcmp(answer[i][j],word) == 0) //문자열 비교 같으면 0을 반환
                {
                    printf("정답입니다!\n");
                    correct++;
                }
            }

            p = strstr(word,count_char[i]); // 특정 문자열 검색
            loc = (int)(p-word); // 검색 장소를 변경

            if (p != NULL) // 찾지 못하면 NULL을 반환하는데 NULL이 아니면 카운트
            {
                count[i]++;
            }

        }

    }

    return 0;
}
