#include <stdio.h>
#define SIZE 5

int search(int *A,int size,int search_value);

int main()
{
    int A[SIZE] = {100,200,300,400,500};
  
    printf("������ 200������ ����� �ε���=%d",search(A,SIZE,200));

    return 0;
}

int search(int *A,int size,int search_value)
{
    int i;
    for(i=0; i<size; i++)
    {
        if(A[i]==search_value)
        {
            return i;
        }
    }
}