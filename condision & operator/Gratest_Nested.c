#include <stdio.h>

int main() {
    //Code
    int a,b,c;
    printf("Enter 3 Number :");
    scanf("%d %d %d",&a,&b,&c);
    // if(a>b && a>c)printf("a is grater");
    // if(b>a && b>c)printf("b is grater");
    // if(c>a && c>b)printf("c is grater");

    if(a>b){
        if(a>c){
            printf("A is grater");
        }
        else{ //c>a  a>b
              //c>a>b
              printf("C is grater");
        }
    }
    else{ //b>a
        if(b>c){
            printf("B is grater");
        }
        else{
            //c>b>a
            printf("C is grater");
        }
    }
    return 0;
}