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
    {"ÇÇÀÚ",1000},
    {"Ä¡Å²",500},
    {"¶±ººÀÌ",600}
  };

  for (int i=0; i<3; i++) 
  {
    sum += food[i].calories;
  }

  printf("ÃÑ Ä®·Î¸®=%d", sum);

  return 0;

}