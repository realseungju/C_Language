#include <stdio.h>

typedef struct email {
    char title[20];
    char sender[30];
    char reciver[30];
    char content[50];
    char date[10];
    int pri;
}E;

int main()
{
    E email = {
        "�Ⱥ� ����",
        "seungju@c.kr",
        "seungju@c.kr",
        "���� �� �ް� �;��",
        "2010/9/1",
        1
    };

    printf("����: %s\n",email.title);
    printf("�߽���: %s\n",email.sender);
    printf("������: %s\n",email.reciver);
    printf("����: %s\n",email.content);
    printf("��¥: %s\n",email.date);
    printf("�켱����: %d\n",email.pri);

    return 0;
}