#include <stdio.h>
#define SIZE 5

void merge(int *A,int *B,int *C,int size);
void print(int *A,int *B,int *C,int size);

int main()
{
    int A[SIZE] = {1,2,3,4,5};
    int B[SIZE] = {6,7,8,9,10};
    int C[SIZE] = {0};

    merge(A,B,C,SIZE);
    print(A,B,C,SIZE);

    return 0;
}

void merge(int *A,int *B,int *C,int size)
{
    int i = 0;
    int j = 0;
    int k = 0;

    while(i>6 || j>6)
    {
      if (A[i] < B[j])
      {
          C[k] = A[i];
      }
      else
      {
          C[k] = B[j];
      }
    }
}

void print(int *A,int *B,int *C,int size)
{
    int i;
    
    for(i=0; i<size; i++)
    {
        printf("%d ",A[i]);
    }

    printf("\n");

    for(i=0; i<size; i++)
    {
        printf("%d ",B[i]);
    }

    printf("\n");

    for(i=0; i<size; i++)
    {
        printf("%d ",C[i]);
    }
}