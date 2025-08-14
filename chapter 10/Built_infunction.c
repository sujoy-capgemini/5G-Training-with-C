#include <stdio.h>
#include <string.h>
int main() {
    //Code
    char str[]="SUJOY";
    printf("The length is :%d\n",strlen(str));
    //*length

    char* ptr=str;

    printf("%s\n",str);//SUJOY
    printf("%s\n",ptr);//SUJOY

    str[0]='m';
    printf("%s\n",str);//mUJOY
    printf("%s\n",ptr);//mUJOY

    return 0;
}