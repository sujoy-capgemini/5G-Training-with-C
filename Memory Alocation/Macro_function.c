#include <stdio.h>
#define PI 3.14159
#define area(r)(PI*r*r)

/*
float area(float r){
    return PI*r*r;
}
*/
int main() {
    //Code
    printf("%f",area(10));
    return 0;
}