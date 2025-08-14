//*String 
// #include <stdio.h>
// #include <string.h>

// int main() {
//     //Code
//     char str[]="Sujoy Ghoshal";
//     int n=strlen(str);
//     printf("%s\n ",str);
//     printf("The length is :%d",n);
//     return 0;
// }


//*String in pointer :
#include <stdio.h>
#include <string.h>
int main() {
    char str[]="SUJOY GHOSHAL";
    char *ptr=str;
    int n=strlen(str);
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
    }
    return 0;
}