#include <stdio.h>
#include <stdlib.h>

char *get_word();

int main()
{
    char *string = get_word();

    printf("동적 메모리에 저장된 단어는 %s 입니다.", string);

    return 0;
}

char *get_word() // 문자열 포인터를 반환 하는 함수
{
    char *s = (char *)malloc(sizeof(char)*50); // 메모리 할당

    if (s == NULL) // 할당이 안되면
    {
        printf("메모리 할당 오류\n");
        exit(1);
    }

    printf("단어를 입력하시오(최대 50글자): ");
    scanf("%s", s);

    return s;
}