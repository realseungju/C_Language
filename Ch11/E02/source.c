#include <stdio.h>

int main()
{
    int i = 10;
    double f = 12.3;
    int *pi = NULL; // �ʱ�ȭ�� �ȵ� �����ʹ� NULL�� �ʱ�ȭ
    double *pf = NULL; // NULL �����͸� ������ ���������� �ϵ����� ����

    pi = &i;
    pf = &f;

    printf("%u %u\n", pi, &i);
    printf("%u %u\n", pf, &f);
    return 0;
}