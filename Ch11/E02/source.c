#include <stdio.h>

int main()
{
    int i = 10;
    double f = 12.3;
    int *pi = NULL; // 초기화가 안된 포인터는 NULL로 초기화
    double *pf = NULL; // NULL 포인터를 가지고 간접참조시 하드웨어로 감지

    pi = &i;
    pf = &f;

    printf("%u %u\n", pi, &i);
    printf("%u %u\n", pf, &f);
    return 0;
}