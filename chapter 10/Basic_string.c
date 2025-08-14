#include <stdio.h>

int main() {
    //Code
    char arr[]="sujoy";
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        printf("%c",arr[i]);
    }
    printf("\n%d",n);

    char null_character='\0';
    printf("%c",null_character);

    return 0;
}