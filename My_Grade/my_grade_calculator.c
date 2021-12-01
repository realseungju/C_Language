#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 7

void convert(double *grades, double *scores, int size);
void get_average(double *grades, double *scores, double *average, int size);

int main()
{
    char major[7][15] = {"고급웹","고급C","창의공학","오픈소스","의통영","기독교","토플"};
    double average[2]; // saves grades and scores average.
    double grades[SIZE] = {4.5,4.5,4.5,4.5,4.5,4.5,4.5};
    double scores[SIZE];
    int i;

    convert(grades,scores,SIZE); // calculate.
    get_average(grades,scores,average,SIZE);

    for(i=0; i<7; i++) // print major grades, scores.
    {
        printf("%s : ", major[i]);
        printf("%.2lf ",*(grades+i));
        printf(" / ");
        printf("%.2lf ",*(scores+i));
        printf("\n");
    }
    printf("\n");

    printf("Grade Average: %.2lf",average[0]); // print average.
    printf(" / ");
    printf("Score Average: %.2lf",average[1]);

    printf("\n");

    return 0;
}

void convert(double *grades, double *scores, int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        *(scores+i) = *(grades+i)*100/4.5;
    }

}

void get_average(double *grades, double *scores, double *average, int size)
{
    int i;
    double grade_temp, score_temp;
    for(i=0; i<size; i++)
    {
        grade_temp += *(grades+i);
        score_temp += *(scores+i);
    }

    *average = grade_temp/(double)size;
    *(average+1) = score_temp/(double)size;
}