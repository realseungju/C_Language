#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_lcm_gcd(int x,int y,int *p_lcm,int *p_gcd);

int main()
{
    int x,y;
    int p_lcm,p_gcd;

    printf("�� ���� ������ �Է��Ͻÿ�: ");
    scanf("%d %d",&x,&y);

    get_lcm_gcd(x,y,&p_lcm,&p_gcd);

    printf("�ּҰ������ %d�Դϴ�.\n",p_lcm);
    printf("�ִ������� %d�Դϴ�.\n",p_gcd);

    return 0;
}

void get_lcm_gcd(int x,int y,int *p_lcm,int *p_gcd)
{
    int r;
    int mul = x*y;

    while(y != 0)
    {
        r = x%y;
        x = y;
        y = r;
    }
    
    *p_gcd = x;
    *p_lcm = mul / *p_gcd;
}