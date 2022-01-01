#include <stdio.h>
#include <stdlib.h>


int main() 
{

  int num;

  printf("문자열의 개수: ");
  scanf("%d", &num);

  char **string = NULL;

  printf("[ ");

  if ((string = (char **)malloc(n * sizeof(char *))) != NULL) 
  {

    for (int i = 0; i < n; i++) 
    {

      string[i] = (char *)malloc(100);

      printf("\"문자열%d\" ", i);

    }

  }

  printf("] ");

}
