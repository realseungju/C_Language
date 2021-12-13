#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sort_by_name(S* list,char temp_name[],int temp_number,double temp_grade,int size);
void sort_by_grade(S* list,char temp_name[],int temp_number,double temp_grade,int size);
int average(S* list,int size);

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
    char temp_name[10];
    int temp_number;
    double temp_grade;
    int max,min;

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

    sort_by_name(list,temp_name,temp_number,temp_grade,size);

    printf("�̸� �� ����\n");
    for (i = 0; i < size; i++) {
        printf("��ȣ: %d, �̸�: %s, ����: %.2lf\n", list[i].number, list[i].name, list[i].grade);
    }

    printf("============================\n");

    sort_by_grade(list,temp_name,temp_number,temp_grade,size);

    max_grade = list[0].grade;
    min_grade = list[size-1].grade;
    average = 0; // �ʱ�ȭ

    printf("���� �� ����\n");
    for (i = 0; i < size; i++) {
        printf("��ȣ: %d, �̸�: %s, ����: %.2lf\n", list[i].number, list[i].name, list[i].grade);
    }

    for (i=0; i<size; i++)
    {
        average += list[i].grade;
    }

    average = average/size;

    printf("���� ����: %.2lf, �ְ� ����: %.2lf, ��� ����: %.2lf",min_grade,max_grade,average);

    free(list);

    return 0;
}

void sort_by_name(S* list,char temp_name[],int temp_number,double temp_grade,int size)
{
    int i,j;

    for (i=0; i<size; i++) // �̸� ������ ����
    {
        for(j=0; j<size; j++)
        {
            if(strcmp(list[i].name,list[j].name) < 0 )
            {
                strcpy(temp_name,list[j].name);
                temp_number = list[j].number;
                temp_grade = list[j].grade;

                strcpy(list[j].name,list[i].name);
                list[j].number = list[i].number;
                list[j].grade = list[i].grade;

                strcpy(list[i].name,temp_name);
                list[i].number = temp_number;
                list[i].grade = temp_grade;
            }
        }
    }    
}

void sort_by_grade(S* list,char temp_name[],int temp_number,double temp_grade,int size)
{
    int max,min,i,j;

    for (i=0; i<size; i++) // �ְ� ���� ������ ����
    {
		    max = i;
		    for (j=i+1; j<size; j++)
		    {
			      if (list[j].grade > list[max].grade)
				      max = j;
		    }
            temp_grade = list[i].grade;
            list[i].grade = list[max].grade;
            list[max].grade = temp_grade;

            strcpy(temp_name,list[i].name);
            strcpy(list[i].name,list[max].name);
            strcpy(list[max].name,temp_name);

            temp_number = list[i].number;
            list[i].number = list[max].number;
            list[max].number = temp_number;
    }
}