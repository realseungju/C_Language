#include<stdio.h>
#include<stdlib.h>

typedef struct point 
{
  int x, y;

}P;

int equal(P *p1, P *p2);

int main() 
{
  P p1, p2;
  int result;

  P *pp1 = &p1; // ������
  P *pp2 = &p2;

  p1.x = 1, p1.y = 2;
  p2.x = 3, p2.y = 5;
  result = equal(pp1, pp2); // �����ͷ� �ѱ�

  if (result == 1)
    printf("(%d, %d) == (%d, %d)", pp1->x, pp1->y, pp2->x ,pp2->y); // �����ͷ� ���
  else
    printf("(%d, %d) != (%d, %d)", pp1->x, pp1->y, pp2->x, pp2->y);

  return 0;
}

int equal(P *p1, P *p2) // �����ͷ� ����
{

  if (p1->x == p2->x && p1->y == p2->y)
    return 1;
  else 
    return 0;

}