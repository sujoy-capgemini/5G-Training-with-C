#include <stdio.h>

int main() {
    // Your code here cp-> 5 sp->4
    int cp,sp;
    printf("Enter the CP :");
    scanf("%d",&cp);
    printf("Enter the SP :");
    scanf("%d",&sp);
    if(cp>sp){
        printf("Loss %d",cp-sp);
    }
    if(sp<cp){
        printf("profit%d",sp-cp);
    }
    if(sp==cp){
        printf("No profit no loss");
    }
    return 0;
}