#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int r;
    float pi=3.14,area;
    scanf("%d",&r);
    area=pi*r*r;
    print("Area: %0.2f",area);
    return 0;
}