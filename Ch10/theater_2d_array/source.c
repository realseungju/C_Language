#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ROW 3
#define COL 10

int main()
{
  int array[ROW][COL] = {
    {1,2,3,4,5,6,7,8,9,10},
    {0},
    {0}
  };

  int i,j,pick_array_row,pick_array_col;
  char check;

  while (1)
  {
    if (check != 'y' || check != 'n')
    {
      printf("�����Ͻðڽ��ϱ�? (y or n): ");
      scanf(" %c",&check);
    }

    if (check == 'n')
      break;
    else if (check != 'y')
    {
      printf("�߸� �Է��ϼ̽��ϴ�.\n");
      continue;
    }

    for (i=0; i<ROW; i++)
    {
    for (j=0; j<COL; j++)
      printf("%d ", array[i][j]);

    printf("\n");
    }

    printf("�¼��� �� ���� �Է��ϼ��� (1 or 2): ");
    scanf("%d", &pick_array_row);

    if (pick_array_row > 2 || pick_array_row < 1)
    {
      printf("�߸� �Է��ϼ̽��ϴ�.\n");
      continue;
    }

    for (j=0; j<COL; j++)
    {
      printf("%d ", array[pick_array_row][j]);
    }

    printf("\n1���� 10������\n");
    printf("���ϴ� �¼��� ��ȣ�� �Է��ϼ���: ");
    scanf("%d", &pick_array_col);

    if (pick_array_col > 10 || pick_array_col < 0)
    {
      printf("�߸� �Է��ϼ̽��ϴ�.\n");
      continue;
    }

    if (array[pick_array_row][pick_array_col-1] == 0)
    {
      printf("�¼��� ����Ǿ����ϴ�.\n");
      array[pick_array_row][pick_array_col-1] = 1;
    }
    else
      printf("�̹� ����� �¼��Դϴ�.\n");
  }

  return 0;
}