#include <stdio.h>
#include <stdlib.h>

int main() 
{

    int num;
    int *array;
    int sum = 0;

    printf("������ ����: ");

    scanf("%d", &num);

    array = (int *)malloc(sizeof(int)*num);

    for (int i=0; i<num; i++) 
    {
        printf("���� ������ �Է��Ͻÿ�: ");

        scanf("%d", &array[i]);

        sum += array[i];
    }

    printf("���� %d�Դϴ�.", sum);
    
    free(array);

    return 0;
  
}