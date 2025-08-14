#include <stdio.h>

int main() {
    //*shallo copy
    char str[]="SUJOY GHOSHAL";
    char* ptr=str;
    str[0]='M';
    printf("%s\n",ptr);

    
    //*Deep copy
    char name[]="SUJOY GHOSHAL";
    name[0]='M';
    printf("%s\n",name);

    return 0;
}