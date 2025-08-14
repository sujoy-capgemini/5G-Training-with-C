#include <stdio.h>

int main() {
    //Code
    char str[]="Collage Walla";
    char* ptr=str;
    int i=0;
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
        i++;
    }
    return 0;
}