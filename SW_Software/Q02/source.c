#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int time;
    int sec_count;
    int min_count;
    int five_min_count;

    while(1)
    {
        sec_count = 0;
        min_count = 0;
        five_min_count = 0;

        scanf("%d",&time);

        if(time>=300)
        {
            five_min_count = time/300; // 몫은 카운트
            time = time%300; // 나머지를 time에 저장
        }

        if(time>=60)
        {
            min_count = time/60;
            time = time%60;
        }

        if(time>=10)
        {
            sec_count = time/10;
            time = time%10;
        }

        if(time>0) // 나눈 나머지가 남아있으면
        {
            printf("%d\n",-1); // -1 출력
        }
        else
        {
            printf("%3d %3d %3d\n",five_min_count,min_count,sec_count); // 5분 1분 10초
        }
    }

    return 0;
}
