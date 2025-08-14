#include <stdio.h>
#include <string.h>

    typedef struct Car{
        int car_id;
        float car_price;
        char car_name[50];
    }car;

int main() {
    
    car c1;
    c1.car_id=211981196;
    c1.car_price=23435555.234;
    strcpy(c1.car_name,"Toyta");

    car *ptr=&c1;
    printf("car id :%d\n",ptr->car_id);
    printf("car price :%f\n",ptr->car_price);
    printf("car name :%s\n",ptr->car_name);

    return 0;
}