#include <stdio.h>

int main()
{
    int arr1[6] = {10,10,10,10,10,10};
    int arr2[6] = {20,20,20,20,20,20};
    int arr3[6] = {30,30,30,30,30,30};
    int result = 0;
    int *array[4] = {arr1,arr2,arr3,&result};
    int i,j;

    for (i=0; i<3; i++)
    {
      for(j=0; j<6; j++)
      {
        **(array+3) += *(*(array+i)+j); 
        // array[3]의 값(result)에 array[i]의 j번째 인덱스의 값을 더한다.
      }
    }

    printf("%d",**(array+3)); // array[3]의 값을 출력

    return 0;
}