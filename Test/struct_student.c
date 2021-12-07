#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student {
    int number;
    char name[10];
    double grade;
}S;

int main()
{
    int size,i,j;
    double average;
    double max_grade,min_grade;
    int max,min;
    char temp_name[10];
    int temp_number;
    double temp_grade;

    printf("����� �Է��Ͻðڽ��ϱ�? ");
    scanf("%d", &size);
    printf("\n");

    S* list = malloc(sizeof(S) * size);

    for (i = 0; i < size; i++) {
        printf("��ȣ�� �Է��ϼ���: ");
        scanf("%d", &list[i].number);
        printf("�̸��� �Է��ϼ���: ");
        scanf("%s", &list[i].name);
        printf("������ �Է��ϼ���: ");
        scanf("%lf", &list[i].grade);
        printf("============================\n");
    }

    for (i=0; i<size; i++) // �̸� ������ ����
    {
        for(j=0; j<size; j++)
        {
            if(strcmp(list[i].name,list[j].name) < 0 )
            {
                strcpy(temp_name,list[j].name); // �̸� ����
                strcpy(list[j].name,list[i].name);     
                strcpy(list[i].name,temp_name);

                temp_number = list[j].number; // ���� ����
                list[j].number = list[i].number;
                list[i].number = temp_number;

                temp_grade = list[j].grade; // ���� ����
                list[j].grade = list[i].grade;
                list[i].grade = temp_grade;
            }
        }
    }

    printf("�̸� �� ����\n");
    for (i = 0; i < size; i++) {
        printf("��ȣ: %d, �̸�: %s, ����: %.2lf\n", list[i].number, list[i].name, list[i].grade);
    }
    printf("============================\n");

    for (i=0; i<size; i++) // �ְ� ���� ������ ����
    {
		    max = i;
		    for (j=i+1; j<size; j++) // �ִ밪 �� �� �ִ밪 ����
		    {
			      if (list[j].grade > list[max].grade)
				      max = j;
		    }
            temp_grade = list[i].grade; // ���� ����
            list[i].grade = list[max].grade;
            list[max].grade = temp_grade;

            strcpy(temp_name,list[i].name); // �̸� ����
            strcpy(list[i].name,list[max].name);
            strcpy(list[max].name,temp_name);

            temp_number = list[i].number; // ���� ����
            list[i].number = list[max].number;
            list[max].number = temp_number;
    }

    max_grade = list[0].grade;
    min_grade = list[size-1].grade;
    average = 0; // �ʱ�ȭ

    printf("���� �� ����\n");
    for (i = 0; i < size; i++) {
        printf("��ȣ: %d, �̸�: %s, ����: %.2lf\n", list[i].number, list[i].name, list[i].grade);
    }
    printf("============================\n");

    for (i=0; i<size; i++)
    {
        average += list[i].grade;
    }
    average = average/size; // ��� ���

    for (i=0; i<size; i++) // ���� ������ ����
    {
		    min = i;
		    for (j=i+1; j<size; j++) // �ִ밪 �� �� �ִ밪 ����
		    {
			      if (list[j].number < list[min].number)
				      min = j;
		    }
            temp_grade = list[i].grade; // ���� ����
            list[i].grade = list[min].grade;
            list[min].grade = temp_grade;

            strcpy(temp_name,list[i].name); // �̸� ����
            strcpy(list[i].name,list[min].name);
            strcpy(list[min].name,temp_name);

            temp_number = list[i].number; // ���� ����
            list[i].number = list[min].number;
            list[min].number = temp_number;
    }

    printf("���� �� ����\n");
    for (i = 0; i < size; i++) {
        printf("��ȣ: %d, �̸�: %s, ����: %.2lf\n", list[i].number, list[i].name, list[i].grade);
    }
    printf("============================\n");
    printf("���� ����: %.2lf, �ְ� ����: %.2lf, ��� ����: %.2lf",min_grade,max_grade,average);

    free(list);

    return 0;
}