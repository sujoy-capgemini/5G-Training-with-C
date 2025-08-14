#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Book{
    char book_title[100];
    char book_author[50];
    float book_price;
}Book;

int main() {
    Book *ptr=(Book *)malloc(sizeof(Book));

    if(ptr==NULL){
        printf("Memory allocation faild\n");
        return 1;
    }
    
    strcpy(ptr->book_title,"Nature Book");
    strcpy(ptr->book_author,"Sujoy Ghoshal");
    ptr->book_price=70.567;

    printf("The Book Title : %s\n",ptr->book_title);
    printf("The Book Author : %s\n",ptr->book_author);
    printf("The Book price : %.2f\n",ptr->book_price);

    free(ptr);
    return 0;
}