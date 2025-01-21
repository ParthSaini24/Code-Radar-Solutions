#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float pi=3.14,area,r;
    scanf("%f",&r);
    area=pi*r*r;
    printf("Area: %0.2f",area);
    return 0;
}