#include <stdio.h>

int main() {

    //*(Non-pointer)String will change.
    // char str[]="SUJOY";
     //printf("%s",str);
    // str[0]='M';
    // printf("%s",str);

    //*(Non-pointer)String will Not change.
    // char str[]="SUJOY";
    // printf("%s",str);
    // str="MUJOY"; //!error
    // printf("%s",str);

    //*(pointer)String will Not change.
    // char* ptr="SUJOY";
    // printf("%s",ptr);
    // ptr[0]='M'; //!error
    // printf("%s",ptr);
    // return 0;

    //*(pointer)String will change.
    char* ptr="SUJOY";
    printf("%s",ptr);
    ptr="MUJOY";
    printf("%s",ptr);


    return 0;
}