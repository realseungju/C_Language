#include <stdio.h>
#include <stdlib.h>

char *get_word();

int main()
{
    char *string = get_word();

    printf("���� �޸𸮿� ����� �ܾ�� %s �Դϴ�.", string);

    return 0;
}

char *get_word() // ���ڿ� �����͸� ��ȯ �ϴ� �Լ�
{
    char *s = (char *)malloc(sizeof(char)*50); // �޸� �Ҵ�

    if (s == NULL) // �Ҵ��� �ȵǸ�
    {
        printf("�޸� �Ҵ� ����\n");
        exit(1);
    }

    printf("�ܾ �Է��Ͻÿ�(�ִ� 50����): ");
    scanf("%s", s);

    return s;
}