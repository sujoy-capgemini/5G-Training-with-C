#include <stdio.h>
#include <string.h>
int main()
{

    //*charcater array (string):
    char arr[] = "SUJOY";
    //*length _printing:
    int length = strlen(arr);
    printf("The length of string : %d\n", length);
    //*print the string:
    for (int i = 0; i < strlen(arr); i++)
    {
        printf("%c\n", arr[i]);
    }


    //*user input (gets and puts):
    char str[50];
    printf("Enter your name :");
    // scanf("%s",&str);
    // printf("Yor name is : %s",str);
    gets(str);
    printf("Your name is :");
    puts(str);


    //*Using pointer:
    char* ptr=arr;
    printf("Using pointer print :%s\n",ptr);
    //*update
    arr[0]='M';
    printf("The current string is :%s\n",str);
    printf("The current string is using ptr :%s\n",ptr);

    //*Null chracter:
    char name[]="HEL\0LO\0";
    printf("The name length :%d",strlen(name));
    printf("Name : %s",name);
    return 0;
}