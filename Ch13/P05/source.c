#include<stdio.h>
#include<stdlib.h>

typedef struct point 
{
  int x, y;

}P;

int equal(P p1, P p2);

int main() 
{
  P p1, p2;
  int result;

  p1.x = 1, p1.y = 2;
  p2.x = 3, p2.y = 5;
  result = equal(p1, p2);

  if (result == 1)
    printf("(%d, %d) == (%d, %d)", p1.x, p1.y, p2.x ,p2.y);
  else
    printf("(%d, %d) != (%d, %d)", p1.x, p1.y, p2.x, p2.y);

  return 0;
}

int equal(P p1, P p2)
{

  if (p1.x == p2.x && p1.y == p2.y)
    return 1;
  else 
    return 0;

}