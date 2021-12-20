#include <stdio.h>
#define SIZE 6

void set_max_ptr(int m[],int size,int **pmax);

int main()
{
    int m[SIZE] = {5,6,1,3,7,9};
    int *pmax;

    set_max_ptr(m,SIZE,&pmax);
    printf("가장 큰 값은 %d\n",*pmax);
    return 0;
}

void set_max_ptr(int m[],int size,int **pmax)
{
    int i;
    int max = m[0];
    for(i=1; i<size; i++)
    {
        if(max < m[i])
        {
            (*pmax) = &m[i];
        }
    }
    printf("가장 큰 값은 %d\n",**pmax);
}