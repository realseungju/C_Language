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
        "안부 메일",
        "seungju@c.kr",
        "seungju@c.kr",
        "학점 잘 받고 싶어요",
        "2010/9/1",
        1
    };

    printf("제목: %s\n",email.title);
    printf("발신자: %s\n",email.sender);
    printf("수신자: %s\n",email.reciver);
    printf("내용: %s\n",email.content);
    printf("날짜: %s\n",email.date);
    printf("우선순위: %d\n",email.pri);

    return 0;
}