#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int rotation(int N); // ��ȯ �Լ�
int count = 0; // ���� 3,6,9 ī��Ʈ

int main()
{
    int N,i;

    while(1)
    {
        count = 0; // �ʱ�ȭ
        scanf("%d",&N);
        
        for (i = 0; i <= N; i++)
        {
            rotation(i); // ��ȯ
        }

        printf("%d\n",count); // ���
    }
}

int rotation(int N) // ���⼭ N�� i�̴�.
{
    if (N%10 == 3) // N�� 10���� ���� ������ ó��
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

    if (N < 10) // N�� 3���� ������
    {
      return 0; // for ������ ���ư�
    }

    return rotation(N/10); // ��ȯ
}