#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Car{
    char car_name[50];
    int car_price;
    float car_millage;
    char car_color[100];
}Car;

void print_carData(Car *ptr){
    printf("Car Name : %s\n",ptr->car_name);
    printf("Car price : %d\n",ptr->car_price);
    printf("Car millage: %.2f\n",ptr->car_millage);
    printf("Car color : %s\n",ptr->car_color);
}
int update_carData(Car *ptr){
    ptr->car_price=300000;
    return ptr->car_price;
}
int main() {
    Car *ptr=(Car *)malloc(sizeof(Car));
    strcpy(ptr->car_name,"Toyta");
    ptr->car_price=7895555;
    ptr->car_millage=67.789;
    strcpy(ptr->car_color,"Black");

    print_carData(ptr);

    int newupdate_price=update_carData(ptr);
    printf("Update price : %d\n",newupdate_price);
    free(ptr);
    return 0;
}