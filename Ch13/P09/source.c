#include <stdio.h>
#include <stdlib.h>

typedef struct food 
{
  char name[20];
  int calories;

}F;

int main() 
{

  int sum = 0;
  F food[3] = {
    {"����",1000},
    {"ġŲ",500},
    {"������",600}
  };

  for (int i=0; i<3; i++) 
  {
    sum += food[i].calories;
  }

  printf("�� Į�θ�=%d", sum);

  return 0;

}