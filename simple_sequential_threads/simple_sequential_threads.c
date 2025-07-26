

#include <stdio.h>
#include <pthread.h>
#include <semaphore.h> // Required for semaphores

// The maximum number to print
#define MAX_COUNT 20


int count = 1;          // The shared counter, starts at 1.
sem_t sem_odd;          // A semaphore for the odd thread's turn.
sem_t sem_even;         // A semaphore for the even thread's turn.

/**
 * @brief The function for the thread that prints ODD numbers.
 */
void* print_odd(void* arg) {
    for (int i = 1; i <= MAX_COUNT; i += 2) {
        // 1. Wait for the 'odd' semaphore.
        // The thread will pause here until sem_odd's value is > 0.
        sem_wait(&sem_odd);

        // 2. Print the number.
        // We know it's our turn, so we can safely access 'count'.
        printf("%d ", count);

        // 3. Increment the count for the next thread.
        count++;

        // 4. Release the 'even' semaphore.
        // This gives the "key" to the even thread so it can run.
        sem_post(&sem_even);
    }
    return NULL;
}

/**
 * @brief The function for the thread that prints EVEN numbers.
 */
void* print_even(void* arg) {
    for (int i = 2; i <= MAX_COUNT; i += 2) {
        // 1. Wait for the 'even' semaphore.
        // The thread will pause here until the odd thread calls sem_post(&sem_even).
        sem_wait(&sem_even);

        // 2. Print the number.
        printf("%d ", count);

        // 3. Increment the count.
        count++;

        // 4. Release the 'odd' semaphore.
        // This gives the "key" back to the odd thread for the next number.
        sem_post(&sem_odd);
    }
    return NULL;
}

int main() {
    pthread_t thread_odd, thread_even;

    sem_init(&sem_odd, 0, 1);
    sem_init(&sem_even, 0, 0);

    printf("Starting threads to print numbers from 1 to %d...\n", MAX_COUNT);

    // Create the two threads
    pthread_create(&thread_odd, NULL, print_odd, NULL);
    pthread_create(&thread_even, NULL, print_even, NULL);

    // Wait for both threads to finish
    pthread_join(thread_odd, NULL);
    pthread_join(thread_even, NULL);

    printf("\nThreads finished.\n");

    // Clean up the semaphores
    sem_destroy(&sem_odd);
    sem_destroy(&sem_even);

    return 0;
}
