#include<stdio.h>

#include<stdlib.h>


typedef struct point {

int x, y;

}point;


int equal(point p1, point p2) {

if (p1.x == p2.x && p1.y == p2.y)

return 1;

else return 0;

}


int main() {

int res;

point p1, p2;

p1.x = 1, p1.y = 2;

p2.x = 3, p2.y = 5;

res = equal(p1, p2);

if (res == 1)

printf("(%d, %d) == (%d, %d)", p1.x, p1.y, p2.x ,p2.y);

else

printf("(%d, %d) != (%d, %d)", p1.x, p1.y, p2.x, p2.y);

}
