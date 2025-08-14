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

    student s1={2111981197,80.50,'B'};

    student s2=s1; //*deep copy

    printf("%c\n",s1.grade);
    printf("%c\n",s2.grade);
    
    s2.grade='A';
    printf("%c\n",s1.grade);
    printf("%c\n",s2.grade);
    
    return 0;
}