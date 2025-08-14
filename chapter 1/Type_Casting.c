#include <stdio.h>

int main() {
    //*TypeCasting
    int x;
    printf("Enter a Integer Number :");
    scanf("\n%d",&x);
    float float_ans=(float)x;
    printf("%f",float_ans/2);
    return 0;
}