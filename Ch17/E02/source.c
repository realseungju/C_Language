#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *list;
    int i,students;
    int sum = 0;

    printf("�л��� ��: ");
    scanf("%d",&students);

    list = (int *)malloc(students * sizeof(int));

    if (list==NULL)
    {
        printf("���� �޸� �Ҵ� ����\n");
        exit(1);
    }

    for (i=0; i<students; i++)
    {
        printf("�л� #%d ����: ",i+1);
        scanf("%d",&list[i]);
        sum += list[i];
    }
    printf("======================\n");
    for (i=0; i<students; i++)
    {
        printf("�л� #%d ����: %d\n",i+1,list[i]);
    }
    printf("======================\n");
    printf("�л� ���: %d\n",sum/students);
    free(list);

    return 0;
}