#include <stdio.h>

int main() {

    struct Student{
        int roll_no;
        float marks;
        char grade;
    };

    struct Student s;
    
    s.roll_no=2111981196;
    s.marks=96.00;
    s.grade='A';

    printf("%d\n",s.roll_no);
    printf("%f\n",s.marks);
    printf("%c\n",s.grade);
    
    return 0;
}