#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Calculator{
    int first_number;
    char operator;
    int second_number;
}Calculator;

int calculation(Calculator *cal){
    if(cal->operator=='+'){
        return cal->first_number+cal->second_number;
    }
    else if(cal->operator=='-'){
        return cal->first_number-cal->second_number;
    }
    else if(cal->operator=='*'){
        return cal->first_number*cal->second_number;
    }
    else if(cal->operator=='/'){
        return cal->first_number/cal->second_number;
    }
    else{
        printf("Invalid operator!\n");
        return 0;
    }
}

int main() {

    Calculator *cal = malloc(sizeof(Calculator));

    printf("Enter 1st Number: ");
    scanf("%d", &cal->first_number);

    printf("Enter operator [ + - * / ]: ");
    scanf(" %c", &cal->operator);

    printf("Enter 2nd Number: ");
    scanf("%d", &cal->second_number);

    int res=calculation(cal);
    printf("Result : %d",res);
    return 0;
}