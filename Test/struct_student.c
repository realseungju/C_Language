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

    for (i=0; i<size; i++) // 이름 순으로 정렬
    {
        for(j=0; j<size; j++)
        {
            if(strcmp(list[i].name,list[j].name) < 0 )
            {
                strcpy(temp_name,list[j].name); // 이름 복사
                strcpy(list[j].name,list[i].name);     
                strcpy(list[i].name,temp_name);

                temp_number = list[j].number; // 순번 복사
                list[j].number = list[i].number;
                list[i].number = temp_number;

                temp_grade = list[j].grade; // 성적 복사
                list[j].grade = list[i].grade;
                list[i].grade = temp_grade;
            }
        }
    }

    printf("이름 순 정렬\n");
    for (i = 0; i < size; i++) {
        printf("번호: %d, 이름: %s, 성적: %.2lf\n", list[i].number, list[i].name, list[i].grade);
    }
    printf("============================\n");

    for (i=0; i<size; i++) // 최고 성적 순으로 정렬
    {
		    max = i;
		    for (j=i+1; j<size; j++) // 최대값 비교 후 최대값 저장
		    {
			      if (list[j].grade > list[max].grade)
				      max = j;
		    }
            temp_grade = list[i].grade; // 성적 복사
            list[i].grade = list[max].grade;
            list[max].grade = temp_grade;

            strcpy(temp_name,list[i].name); // 이름 복사
            strcpy(list[i].name,list[max].name);
            strcpy(list[max].name,temp_name);

            temp_number = list[i].number; // 순번 복사
            list[i].number = list[max].number;
            list[max].number = temp_number;
    }

    max_grade = list[0].grade;
    min_grade = list[size-1].grade;
    average = 0; // 초기화

    printf("성적 순 정렬\n");
    for (i = 0; i < size; i++) {
        printf("번호: %d, 이름: %s, 성적: %.2lf\n", list[i].number, list[i].name, list[i].grade);
    }
    printf("============================\n");

    for (i=0; i<size; i++)
    {
        average += list[i].grade;
    }
    average = average/size; // 평균 계산

    for (i=0; i<size; i++) // 순번 순으로 정렬
    {
		    min = i;
		    for (j=i+1; j<size; j++) // 최대값 비교 후 최대값 저장
		    {
			      if (list[j].number < list[min].number)
				      min = j;
		    }
            temp_grade = list[i].grade; // 성적 복사
            list[i].grade = list[min].grade;
            list[min].grade = temp_grade;

            strcpy(temp_name,list[i].name); // 이름 복사
            strcpy(list[i].name,list[min].name);
            strcpy(list[min].name,temp_name);

            temp_number = list[i].number; // 순번 복사
            list[i].number = list[min].number;
            list[min].number = temp_number;
    }

    printf("순번 순 정렬\n");
    for (i = 0; i < size; i++) {
        printf("번호: %d, 이름: %s, 성적: %.2lf\n", list[i].number, list[i].name, list[i].grade);
    }
    printf("============================\n");
    printf("최저 성적: %.2lf, 최고 성적: %.2lf, 평균 성적: %.2lf",min_grade,max_grade,average);

    free(list);

    return 0;
}