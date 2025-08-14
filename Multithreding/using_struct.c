#include <stdio.h>
#include <pthread.h>

// Define a struct to hold multiple values
typedef struct {
    int start;
    int end;
} Range;

// Thread function that uses the struct
void* print_range(void* arg) {
    Range* range = (Range*)arg;  // Cast void* to Range*
    pthread_t tid = pthread_self();

    for (int i = range->start; i <= range->end; i++) {
        printf("Thread %lu - Value: %d\n", tid, i);
    }

    return NULL;
}

int main() {
    pthread_t t1, t2;

    // Create two different ranges
    Range even_range = {0, 10};
    Range odd_range = {1, 9};

    // Create threads and pass struct as argument
    pthread_create(&t1, NULL, print_range, &even_range);
    pthread_create(&t2, NULL, print_range, &odd_range);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);

    return 0;
}
