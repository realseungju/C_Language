#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ROW 3
#define COL 10

int main()
{
  int array[ROW][COL] = {0};
  int i,j,pick_array;
  int result = 0;

  i = 0;
  for (j=0; j<COL; j++)
  {
    array[i][j] = j+1;
    printf("%d ", array[i][j]);
  }

  printf("\n");

  i = 1;
  for (j=0; j<COL; j++)
  {
    array[i][j] = (j+1)*(j+1);
    printf("%d ", array[i][j]);
  }

  printf("\n");

  i = 2;
  for (j=0; j<COL; j++)
  {
    array[i][j] = array[1][j]*(j+1);
    printf("%d ", array[i][j]);
  }

  printf("\n");

  printf("������ �Է��ϼ���: ");
  scanf("%d", &pick_array);

  for (j=0; j<COL; j++)
  {
    if (array[2][j] == pick_array)
      result = array[0][j];
  }
  
  if (result == 0)
    printf("���������� ���� �� ���� �����Դϴ�.");
  else
    printf("���������� : %d", result);

  return 0;
}
