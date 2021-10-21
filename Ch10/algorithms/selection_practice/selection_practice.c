#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

void selection_reverse(int a[], int b[], int size);
void multi_arry(int a[], int b[], int c[], int size);

int main()
{
    int i;
    int size = SIZE;
    int a[SIZE]={0};
    int b[SIZE]={0};
    int c[SIZE]={0};

    for (i=0; i<size; i++)
    {
        a[i] = rand()%10+1;
        printf("%d ",a[i]);
    }

    printf("\n");

    selection_reverse(a, b, size);
    multi_arry(a, b, c, size);

    return 0;

}

void selection_reverse(int a[], int b[], int size)
{
    int i;

    for (i=0; i<size; i++)
    {
        b[i] = a[(size-1)-i];
        printf("%d ",b[i]);
    }

    printf("\n");

}

void multi_arry(int a[], int b[], int c[], int size)
{
    int i;

    for (i=0; i<size; i++)
    {
        c[i] = a[i] * b[i];
        printf("%d ",c[i]);
    }

    printf("\n");
}