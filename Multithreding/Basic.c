#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

void *myThread(void *arg){
    int *val=(int *)arg;
    printf("Thread is running! value recived %d\n",*val);
    pthread_exit(NULL);
}

int main() {
    //Code
    pthread_t thread1;
    int number =10;
    if(pthread_create(&thread1,NULL,myThread,(void *)&number)!=0){
        printf("Thread craetion faild!\n");
        return 1;
    }
    pthread_join(thread1,NULL);
    printf("Main thread finished\n");
    return 0;
}