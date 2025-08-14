#include <stdio.h>
#include <string.h>

int main() {
    //Code
    char str[50];
    printf("Enter string :");
    //gets(str);
    scanf("%[^\n]s",str);
    int len=strlen(str);

    //*size:
    // int size=0;
    // int i=0;
    // while(str[i]!=0){
    //     size++;
    //     i++;
    // }

    //*print string using while
    // int i=0;
    // while(str[i]!='\0'){
    //     printf("%c",str[i]);
    //     i++;
    // }



    for(int i=len-1;i>=0;i--){
        printf("%c",str[i]);
    }
    //puts(str);
    return 0;
}