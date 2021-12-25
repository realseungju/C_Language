#include <stdio.h>

#include <stdlib.h>


struct food {

char name[20];

int calories;

};


int main() {

int sum = 0;

struct food food_array[3];

food_array[0] = { "피자",1000 };

food_array[1] = { "치킨",500 };

food_array[2] = { "떡볶이",600 };

for (int i = 0; i < 3; i++) {

sum += food_array[i].calories;

}

printf("총 칼로리=%d", sum);

}
