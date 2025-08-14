#include <stdio.h>

int main() {
    // Your code here
    char f_name,l_name;
    f_name='s';
    l_name='g';

    char full_name[]="SUJOY";

    //*pointer string.
    char *name="Sujoy Ghoshal";

    printf("%c %c",f_name,l_name);
    printf("\n");
    printf("%s",full_name);
    printf("\n%s",name);
    return 0;
}