#include <stdio.h>
#define SIZE 4

void merge(int *A,int *B,int *C,int size);
void print(int *A,int *B,int *C,int size);

int main()
{
    int A[SIZE] = {2,5,7,8};
    int B[SIZE] = {1,3,4,6};
    int C[SIZE*2] = {0};

    merge(A,B,C,SIZE);
    print(A,B,C,SIZE);

    return 0;
}

void merge(int *A,int *B,int *C,int size)
{
    int i = 0;
    int j = 0;
    int k = 0;

    while(i<SIZE && j<SIZE)
    {
      if (A[i] < B[j])
      {
          C[k] = A[i];
          k++;
          i++;
      }
      else
      {
          C[k] = B[j];
          k++;
          j++;
      }
    }

    if(i>j) // 배열 A가 먼저 끝남
    {
        while(j!=i)
        {
            C[k] = B[j];
            j++;
            k++;
        }
    }
    else // 배열 B가 먼저 끝남
    {
        while(i!=j)
        {
            C[k] = A[i];
            i++;
            k++;
        }
    }
}

void print(int *A,int *B,int *C,int size)
{
    int i;
    
    printf("A[] = ");
    for(i=0; i<size; i++)
    {
        printf("%d ",*(A+i));
    }

    printf("\n");

    printf("B[] = ");
    for(i=0; i<size; i++)
    {
        printf("%d ",*(B+i));
    }

    printf("\n");

    printf("C[] = ");
    for(i=0; i<size*2; i++)
    {
        printf("%d ",*(C+i));
    }
}