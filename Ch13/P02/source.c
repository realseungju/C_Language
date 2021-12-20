#include <stdio.h>

struct account {
    int number;
    char name[20];
    int balance;
};

int main()
{
    struct account S = {1,"ȫ�浿",100000};
    
    printf("{ %d, %s, %d }\n",S.number,S.name,S.balance);

    return 0;
}