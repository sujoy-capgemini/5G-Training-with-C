#include <stdio.h>

typedef struct Car {
    char brand[50];
    float price;
    int year;
} car;

void update_Year(car *ptr){
     ptr->year=2030;
}

int main() {
    car c1 = {"Toyto", 1200000.00, 2025};
    // printf("Brand: %s\n", c1.brand);
    // printf("Price: %.2f\n", c1.price);
    printf("Before update Year: %d\n", c1.year);

    car *ptr=&c1;
    update_Year(&c1);

    printf("Brand: %s\n",ptr->brand);
    printf("Price: %.2f\n",ptr->price);
    printf("Update Year: %d\n", ptr->year);

    return 0;
}