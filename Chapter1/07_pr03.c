#include<stdio.h>

int main() {
    // (0C x 9/5) + 32 = 32F
    int c = 4;
    float f = (c * (9.0/5)) + 32;
    printf("The value of temperature in tahrenheit is %f", f);
    return 0;
}