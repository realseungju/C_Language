#include <stdio.h>

#include <stdlib.h>

typedef struct complex {

double real;

double imag;

}complex;


complex complex_add(complex c1, complex c2) {

complex c3;

c3.real = c1.real + c2.real;

c3.imag = c1.imag + c2.imag;

return c3;

}


int main() {

complex c1, c2, c3;

c1.real = 1;

c1.imag = 2;


c2.real = 2;

c2.imag = 3;


c3 = complex_add(c1, c2);

printf("%lf+%lfi\n", c1.real, c1.imag);

printf("%lf+%lfi\n", c2.real, c2.imag);

printf("%lf+%lfi\n", c3.real, c3.imag);


}
