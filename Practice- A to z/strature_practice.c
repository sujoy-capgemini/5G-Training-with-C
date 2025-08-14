#include <stdio.h>
#include <string.h>

struct Car{
         int car_id;
         float car_price;
         char car_name[50];
};
 

int main() {
    //Code
    
    struct Car c1;
    c1.car_id=5677484;
    c1.car_price=3243264.43744;
    strcpy(c1.car_name,"Toyta");

    //*update price :
    c1.car_price=213213.324;
    //car c1={5677484,3243264.43744,"Toyta"};

    printf("Car ID : %d\n",c1.car_id);
    printf("Car Price : %.2f\n",c1.car_price);
    printf("Car Name : %s\n",c1.car_name);
    return 0;
}