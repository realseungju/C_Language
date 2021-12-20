#include <stdio.h>
#include <string.h>
#define SIZE 3

void sort_strings(char *list[],int size);

int main()
{
    char *list[SIZE] = {
      "banana",
      "melon",
      "apple"
    };

    sort_strings(list,SIZE);

    for(int i=0; i<SIZE; i++)
    {
        printf("%s\n",list[i]);
    }

    return 0;
}

void sort_strings(char *list[],int size)
{
    int i,j,least;
    char *temp;

    for(i=0; i<size-1; i++)
    {
        least = i;
        for(j=i+1; j<size; j++)
        {
            if(strcmp(list[j],list[least]) < 0)
            {
                least = j;
            }
        }

        temp = list[i];
        list[i] = list[least];
        list[least] = temp;

    }
}