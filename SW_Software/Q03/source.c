#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define A_MAX 4

int main()
{
    char sample[3][3][10] = {
        {"��","��","��"},
        {"��","ǻ","��"},
        {"��","��","��"}
    };

    char answer[A_MAX][3][10] = {
    {"��ǻ��","�Ͱ�","����"},
    {"����","����","����"},
    {"����","����","�ް�"},
    {"�޽�","�ް�","����"}
    };

    char count_char[4][1][10] = {
        {"��"},
        {"��"},
        {"��"},
        {"��"}
    };

    char word[30]; // �Է��� ���� ���ڿ� ����
    int correct = 0;
    int count[4] = {0}; // �ε��� ���ʷ� ��,��,��,�� ī��Ʈ
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
            printf("'��'�̶�� �ܾ 3�� �̻� ����� �� �����ϴ�.\n");
            continue;
        }
        if(count[1] > 3)
        {
            printf("'��'�̶�� �ܾ 3�� �̻� ����� �� �����ϴ�.\n");
            continue;
        }
        if(count[3] > 3)
        {
            printf("'��'��� �ܾ 3�� �̻� ����� �� �����ϴ�.\n");
            continue;
        }
        if(count[4] > 3)
        {
            printf("'��'��� �ܾ 3�� �̻� ����� �� �����ϴ�.\n");
            continue;
        }

        for (int i=0; i<A_MAX; i++)
        {
            for (int j=0; j<3; j++)
            {
                if(strcmp(answer[i][j],word) == 0) //���ڿ� �� ������ 0�� ��ȯ
                {
                    printf("�����Դϴ�!\n");
                    correct++;
                }
            }

            p = strstr(word,count_char[i]); // Ư�� ���ڿ� �˻�
            loc = (int)(p-word); // �˻� ��Ҹ� ����

            if (p != NULL) // ã�� ���ϸ� NULL�� ��ȯ�ϴµ� NULL�� �ƴϸ� ī��Ʈ
            {
                count[i]++;
            }

        }

    }

    return 0;
}
