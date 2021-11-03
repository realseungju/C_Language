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
        printf("������ �Է��Ͻÿ�: ");
        scanf("%d %c %d", &x, &c, &y);
        
        if (c == '+')
        {
            printf("���� ���: %d\n",sum_count(x,y));
        }
        else if (c == '-')
        {
            printf("���� ���: %d\n",min_count(x,y));
        }
        else if (c == '*')
        {
            printf("���� ���: %d\n",mul_count(x,y));
        }
        else if (c == '/')
        {
            printf("������ ���: %d\n",div_count(x,y));
        }
        else
        {
            printf("�߸� �Է��ϼ̽��ϴ�.\n");
        }
    }
    return 0;
}

int sum_count(int x, int y)
{
    static int count_sum = 0;
    count_sum++;
    printf("������ %d �� ȣ��Ǿ����ϴ�.\n",count_sum);
    return (x+y);
}
int min_count(int x, int y)
{
    static int count_min = 0;
    count_min++;
    printf("������ %d �� ȣ��Ǿ����ϴ�.\n",count_min);
    return (x-y);
}
int mul_count(int x, int y)
{
    static int count_mul = 0;
    count_mul++;
    printf("������ %d �� ȣ��Ǿ����ϴ�.\n",count_mul);
    return (x*y);
}
int div_count(int x, int y)
{
    static int count_div = 0;
    count_div++;
    printf("�������� %d �� ȣ��Ǿ����ϴ�.\n",count_div);
    return (x/y);
}