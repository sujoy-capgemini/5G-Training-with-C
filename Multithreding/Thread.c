#include <pthread.h>
#include <stdio.h>

void *foo(void *arg){
    pthread_t thisThread=pthread_self();
    printf("urrent thread ID: %lu\n",(unsigned long)thisThread);
    return NULL;
}
int main() {
    //Code
    pthread_t thread1;
    pthread_create(&thread1,NULL,foo,NULL);
    pthread_join(thread1,NULL);
    return 0;
}