// Write a c program to find area of circle
// Formula to calculate area = pi * radius * radius
#include <stdio.h>
int main() {
    const float PI = 3.14;
    int radius = 20;
    float area = PI*radius*radius;
    printf ("The area of circle is %.2f sq units", area);
    return 0;

}