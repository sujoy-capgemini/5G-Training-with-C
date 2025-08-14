#include <stdio.h>
#include <string.h>

int main()
{
    // Code
    typedef struct Car
    {
        int id;
        float millage;
        char name[50];
    } car;
    car c1;
    c1.id=10001;
    c1.millage=1002.333;
    strcpy(c1.name,"Toyto");
    
    printf("Car Id :%d\n",c1.id);
    printf("Car Milage :%f\n",c1.millage);
    printf("Car Name :%s\n",c1.name);
    return 0;
}