#include <stdio.h>
#include <pthread.h>
void *print_even(void *arg){
  pthread_t tid=pthread_self();
  for(int i=0;i<=10;i+=2){
    printf("Thread %lu - Even : %d\n",tid,i);
  }
  return NULL; //*Thread Terminated
}
void *print_odd(void *arg){
   pthread_t tid=pthread_self();
   for(int i=1;i<10;i+=2){
    printf("Thread %lu - Odd :%d\n",tid,i);
   }
   //return NULL;
   pthread_exit(NULL); //*Thread terminates here
}
int main() {
    //Code
    pthread_t t1,t2;
    pthread_create(&t1,NULL,print_even,NULL);
    //pthread_cancel(t1);
    pthread_create(&t2,NULL,print_odd,NULL);

    pthread_join(t1,NULL);
    pthread_join(t2,NULL);
    return 0;
}