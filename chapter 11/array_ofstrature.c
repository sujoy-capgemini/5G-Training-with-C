#include <stdio.h>

int main() {
    //Code
    typedef struct student
    {
        int roll_no;
        float marks;
        char grade;
    }student;
    
    student arr[3];
    arr[0].roll_no=2111981196;
    arr[0].marks=90.08;
    arr[0].grade='A';

    student s={2111981197,80.50,'B'};
    arr[1]=s;

    printf("%d\n",arr[1].roll_no);
    printf("%f\n",arr[1].marks);
    printf("%c\n",arr[1].grade);
    
    return 0;
}