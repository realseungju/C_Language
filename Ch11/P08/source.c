#include <stdio.h>

int sum(int *A, int size);

int main() 
{
  int a[] = { 1,2,3,0,0,0,0,0,0,0 };

  printf("A[] = ");

  for (int i=0; i<10; i++) 
  {
    printf("%d ", a[i]);
  }

  printf("\n월급의 합=%d", sum(a, 10));
  
  return 0;
}

int sum(int *A, int size) 
{

  int sum = 0;

  for (int i=0; i<size; i++) 
  {
    sum += A[i];
  }
  
  return sum;
}