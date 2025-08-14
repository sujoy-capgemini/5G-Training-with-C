#include <pthread.h>
#include <stdio.h>

void* foo(void* arg) {
    printf("Created a new thread\n");
    printf("Thread is running\n");

    pthread_exit(NULL);
    printf("This will not be executed\n");
    
    return NULL;
 }
int main() {
    
    // Create a pthread_t variable to store
    // thread ID
    pthread_t thread1;
    
    // Creating a new thread. 
    pthread_create(&thread1, NULL, foo, NULL);
    pthread_join(thread1,NULL);
    return 0;
}