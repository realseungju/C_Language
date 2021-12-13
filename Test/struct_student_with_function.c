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

    printf("몇명을 입력하시겠습니까? ");
    scanf("%d", &size);
    printf("\n");

    S* list = malloc(sizeof(S) * size);

    for (i = 0; i < size; i++) {
        printf("번호를 입력하세요: ");
        scanf("%d", &list[i].number);
        printf("이름을 입력하세요: ");
        scanf("%s", &list[i].name);
        printf("성적을 입력하세요: ");
        scanf("%lf", &list[i].grade);
        printf("============================\n");
    }

    sort_by_name(list,temp_name,temp_number,temp_grade,size);

    printf("이름 순 정렬\n");
    for (i = 0; i < size; i++) {
        printf("번호: %d, 이름: %s, 성적: %.2lf\n", list[i].number, list[i].name, list[i].grade);
    }

    printf("============================\n");

    sort_by_grade(list,temp_name,temp_number,temp_grade,size);

    max_grade = list[0].grade;
    min_grade = list[size-1].grade;
    average = 0; // 초기화

    printf("성적 순 정렬\n");
    for (i = 0; i < size; i++) {
        printf("번호: %d, 이름: %s, 성적: %.2lf\n", list[i].number, list[i].name, list[i].grade);
    }

    for (i=0; i<size; i++)
    {
        average += list[i].grade;
    }

    average = average/size;

    printf("최저 성적: %.2lf, 최고 성적: %.2lf, 평균 성적: %.2lf",min_grade,max_grade,average);

    free(list);

    return 0;
}

void sort_by_name(S* list,char temp_name[],int temp_number,double temp_grade,int size)
{
    int i,j;

    for (i=0; i<size; i++) // 이름 순으로 정렬
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

    for (i=0; i<size; i++) // 최고 성적 순으로 정렬
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