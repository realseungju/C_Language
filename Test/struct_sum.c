#include <stdio.h>
#include <string.h>

typedef struct student
{
    char name[10];
    int num;
    double grade;
}S;

struct student sum(S list,S list2)
{
    S list_sum;

    list_sum.num = list.num + list2.num;

    return list_sum;
}

int main()
{
    S list;
    S list2;
    S result;

    list.num = 10;
    list2.num = 20;

    result = sum(list,list2);

    printf("%d",result.num);

    return 0;
}