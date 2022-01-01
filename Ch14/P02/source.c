#include <stdio.h>
#include <string.h>
#define SIZE 6
 
int arr_sum(int array[], int size);
 
int main() 
{
    int array[3][SIZE] = {
        {10,10,10,10,10,10},
        {10,10,10,10,10,10},
        {10,10,10,10,10,10}
    };
  
    int i,j,sum = 0;
    
    for(i=0; i<3; i++) 
    {
        for(j=0; j<6; j++) 
            printf("%3d", array[i][j]);
      
        printf("\n");
    }
    printf("\n");
 
    for(i=0; i<3; i++)
    {
        sum += arr_sum(array[i],SIZE);
    }
  
    printf("arr[3][6]의 전체 저장된 정수들의 합 : %d \n", sum);
 
    return 0;
}
 
int arr_sum(int array[], int size) 
{
    int i,sum = 0;
  
    for(i=0; i<size; i++)
        sum += array[i];
  
    return sum;
}