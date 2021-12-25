#include <stdio.h>

int main() 
{

  int a[] = { 1,2,3,0,0,0,0,0,0,0 };

  int b[] = { 0,0,0,0,0,0,0,0,0,0 };

  int c[10];

  array_add(a, b, c, 10);

  printf("A[] = ");

  for (int i = 0; i < 10; i++) 
  {
    printf("%d ", a[i]);
  }

  printf("\nB[] = ");

  for (int i = 0; i < 10; i++) 
  {
    printf("%d ", b[i]);
  }

  printf("\nC[] = ");

  for (int i = 0; i < 10; i++) 
  {
    printf("%d ", c[i]);
  }

  return 0;
}

void array_add(int *A, int *B, int *C, int size) 
{
  for (int i = 0; i < size; i++) 
  {
    C[i] = A[i] + B[i];
  }
}
