#include <stdio.h>
#define SIZE 10

void convert(double *grades, double *scores, int size);
void print(double *grades, double *scores, int size);

int main()
{
    double grades[SIZE] = {0.0,0.5,1.0,1.5,2.0,2.5,3.0,3.5,4.0,4.3};
    double scores[SIZE];
    convert(grades,scores,SIZE);
    print(grades,scores,SIZE);

    return 0;
}

void convert(double *grades, double *scores, int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        *(scores+i) = *(grades+i)*100/4.3;
    }
}

void print(double *grades, double *scores, int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%.2lf ",*(grades+i));
    }

    printf("\n");

    for(i=0; i<size; i++)
    {
        printf("%.2lf ",*(scores+i));
    }
}