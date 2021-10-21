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
      printf("예약하시겠습니까? (y or n): ");
      scanf(" %c",&check);
    }

    if (check == 'n')
      break;
    else if (check != 'y')
    {
      printf("잘못 입력하셨습니다.\n");
      continue;
    }

    for (i=0; i<ROW; i++)
    {
    for (j=0; j<COL; j++)
      printf("%d ", array[i][j]);

    printf("\n");
    }

    printf("좌석의 층 수를 입력하세요 (1 or 2): ");
    scanf("%d", &pick_array_row);

    if (pick_array_row > 2 || pick_array_row < 1)
    {
      printf("잘못 입력하셨습니다.\n");
      continue;
    }

    for (j=0; j<COL; j++)
    {
      printf("%d ", array[pick_array_row][j]);
    }

    printf("\n1부터 10까지의\n");
    printf("원하는 좌석의 번호를 입력하세요: ");
    scanf("%d", &pick_array_col);

    if (pick_array_col > 10 || pick_array_col < 0)
    {
      printf("잘못 입력하셨습니다.\n");
      continue;
    }

    if (array[pick_array_row][pick_array_col-1] == 0)
    {
      printf("좌석이 예약되었습니다.\n");
      array[pick_array_row][pick_array_col-1] = 1;
    }
    else
      printf("이미 예약된 좌석입니다.\n");
  }

  return 0;
}