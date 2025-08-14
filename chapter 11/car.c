#include <stdio.h>
#include <string.h>

int main() {
    typedef struct car
    {
        int price;
        float topspeed;
        char segment[15];
    }car;

    car c1;
    c1.price=1000000;
    c1.topspeed=200.5;

    strcpy(c1.segment,"sedan");
    printf("%s\n",c1.segment);
    printf("%d\n",c1.price);
    printf("%f\n",c1.topspeed);
    return 0;
} 