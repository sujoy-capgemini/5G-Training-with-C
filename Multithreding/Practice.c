#include <stdio.h>
#include <pthread.h>

void *Thread_Function(void *args){
   pthread_t tid=pthread_self();
   for(int i=0;i<10;i+=2){
    printf("Thread id : %lu -> %d it a Even number\n",tid,i);
   }
   return NULL;
}
int main() {
    //Code
    pthread_t thread;
    pthread_create(&thread,NULL,Thread_Function,NULL);

    pthread_join(thread,NULL);
    return 0;
}