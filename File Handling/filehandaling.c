#include <stdio.h>

int main() {
    FILE* ptr=fopen("Notes.txt","r");
    char str[100];
    //*Read FIle

    // if(fgets(str,100,ptr)!=NULL){
    //     printf("%s",str);
    // }

    while(fgets(str,100,ptr)!=NULL){
        printf("%s",str);
    }

    //*Write FIle
    FILE* crete=fopen("write.txt","w");
    char str1[]="I am creting write file";
    fputs(str1,crete);
    fclose(crete);
    return 0;
}