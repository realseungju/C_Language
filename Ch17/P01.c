#include <stdio.h>
#include <stdlib.h>


int main() 
{

  int num;
  int *array;
  int sum = 0;

  printf("정수의 개수: ");

  scanf("%d", &num);

  array = (int *)malloc(sizeof(int)*num);

  for (int i = 0; i < num; i++) 
  {
    printf("양의 정수를 입력하시오: ");

    scanf("%d", &array[i]);

    sum += array[i];
  }

  printf("합은 %d입니다.", sum);
  
  free(array);

  return 0;
  
}
