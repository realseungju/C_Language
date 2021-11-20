#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 10

int main()
{
    int i;
    int j = 0;
    int num[MAX];
    int count[MAX] = {0};

    for (i=0; i<MAX; i++)
    {
        scanf("%d",&num[i]);
    }
    
    for (i=0; i<MAX; i++)
    {
        repeat_check(i,j,num,count);
        j++;
    }

    for (i=0; i<MAX; i++)
    {
        printf("%d = %d\n",i+1,count[i]);
    }
}

int repeat_check(int i,int j,int num[],int count[])
{
      if (num[i] = num[i+1])
      {
          count[j]++;
      }
      else if (num[i] < num[i+1])
      {
          return repeat_check(i+1,j,num,count);
          count[j]++;
      }

      return 0;
}