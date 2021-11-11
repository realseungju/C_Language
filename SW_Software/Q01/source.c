#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int rotation(int N); // 순환 함수
int count = 0; // 전역 3,6,9 카운트

int main()
{
    int N,i;

    while(1)
    {
        count = 0; // 초기화
        scanf("%d",&N);
        
        for (i = 0; i <= N; i++)
        {
            rotation(i); // 순환
        }

        printf("%d\n",count); // 출력
    }
}

int rotation(int N) // 여기서 N은 i이다.
{
    if (N%10 == 3) // N을 10으로 나눈 나머지 처리
    {
      count++;
    }
    else if (N%10 == 6)
    {
      count++;      
    }
    else if (N%10 == 9)
    {
      count++;      
    }

    if (N < 10) // N이 3보다 작으면
    {
      return 0; // for 문으로 돌아감
    }

    return rotation(N/10); // 순환
}