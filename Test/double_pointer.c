#include <stdio.h>

int main() {
    int m[3][2] = {1,2,3,4,5,6};
    int i;

    for(i=0; i<6; i++)
    {
      printf("index : %d / %d\n",i,*(*m+i));
    }

    for(i=0; i<6; i++)
    {
      printf("index : %d / %d\n",i,*m+i);
    }

    for(i=0; i<3; i++)
    {
      printf("index : %d / %d\n",i,*(m[i]+1));
    }

    return 0;
}