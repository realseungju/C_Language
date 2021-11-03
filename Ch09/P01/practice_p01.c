#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum_count(int x, int y);
int min_count(int x, int y);
int mul_count(int x, int y);
int div_count(int x, int y);


int main()
{
    int x,y;
    char c;
    
    while (1)
    {
        printf("¿¬»êÀ» ÀÔ·ÂÇÏ½Ã¿À: ");
        scanf("%d %c %d", &x, &c, &y);
        
        if (c == '+')
        {
            printf("µ¡»ù °á°ú: %d\n",sum_count(x,y));
        }
        else if (c == '-')
        {
            printf("»¬»ù °á°ú: %d\n",min_count(x,y));
        }
        else if (c == '*')
        {
            printf("°ö»ù °á°ú: %d\n",mul_count(x,y));
        }
        else if (c == '/')
        {
            printf("³ª´°»ù °á°ú: %d\n",div_count(x,y));
        }
        else
        {
            printf("Àß¸ø ÀÔ·ÂÇÏ¼Ì½À´Ï´Ù.\n");
        }
    }
    return 0;
}

int sum_count(int x, int y)
{
    static int count_sum = 0;
    count_sum++;
    printf("µ¡»ùÀº %d ¹ø È£ÃâµÇ¾ú½À´Ï´Ù.\n",count_sum);
    return (x+y);
}
int min_count(int x, int y)
{
    static int count_min = 0;
    count_min++;
    printf("»¬»ùÀº %d ¹ø È£ÃâµÇ¾ú½À´Ï´Ù.\n",count_min);
    return (x-y);
}
int mul_count(int x, int y)
{
    static int count_mul = 0;
    count_mul++;
    printf("°ö»ùÀº %d ¹ø È£ÃâµÇ¾ú½À´Ï´Ù.\n",count_mul);
    return (x*y);
}
int div_count(int x, int y)
{
    static int count_div = 0;
    count_div++;
    printf("³ª´°¼ÀÀº %d ¹ø È£ÃâµÇ¾ú½À´Ï´Ù.\n",count_div);
    return (x/y);
}