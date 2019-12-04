#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include "pi_parallel_computation.h"

/*
 * Вычисление числа Пи, используя несколько потоков
 */
int main() {

    int n;
    pthread_t w1, w2, w3, w4, w5, w6;
    struct par *p;
    void *r1, *r2, *r3, *r4, *r5, *r6;
    double r;

    void *(*function)(void *p);

    function = sum;

    printf("Введите количество итераций для подсчета числа Пи n = ");

    scanf("%d", &n);

    long number_of_cores = sysconf(_SC_NPROCESSORS_ONLN);
    printf("Количество ядер процессора = %ld \n", number_of_cores);
    printf("Количество потоков для исполнения = %ld \n", number_of_cores);

    p = (struct par *) malloc(sizeof(struct par));
    p->a = 0.0;
    p->b = 1;
    p->e = n / number_of_cores;
    p->h = 1.0 / n;
    pthread_create(&w1, NULL, function, p);

    p = (struct par *) malloc(sizeof(struct par));
    p->a = 0.0;
    p->b = n / number_of_cores + 1;
    p->e = 2 * (n / number_of_cores);
    p->h = 1.0 / n;
    pthread_create(&w2, NULL, function, p);

    p = (struct par *) malloc(sizeof(struct par));
    p->a = 0.0;
    p->b = 2 * (n / number_of_cores) + 1;
    p->e = 3 * (n / number_of_cores);
    p->h = 1.0 / n;
    pthread_create(&w3, NULL, function, p);

    p = (struct par *) malloc(sizeof(struct par));
    p->a = 0.0;
    p->b = 3 * (n / number_of_cores) + 1;
    p->e = 4 * (n / number_of_cores);
    p->h = 1.0 / n;
    pthread_create(&w4, NULL, function, p);

    p = (struct par *) malloc(sizeof(struct par));
    p->a = 0.0;
    p->b = 4 * (n / number_of_cores) + 1;
    p->e = 5 * (n / number_of_cores);
    p->h = 1.0 / n;
    pthread_create(&w5, NULL, function, p);

    p = (struct par *) malloc(sizeof(struct par));
    p->a = 0.0;
    p->b = 5 * (n / number_of_cores) + 1;
    p->e = n - 1;
    p->h = 1.0 / n;
    pthread_create(&w6, NULL, function, p);

    pthread_join(w1, &r1);
    pthread_join(w2, &r2);
    pthread_join(w3, &r3);
    pthread_join(w4, &r4);
    pthread_join(w5, &r5);
    pthread_join(w6, &r6);

    r = (f(0.0) + f(1.0) + 2 * (
            *(double *) r1 +
            *(double *) r2 +
            *(double *) r3 +
            *(double *) r4 +
            *(double *) r5 +
            *(double *) r6)) / (2 * n);

    printf("pi = %g\n", 4 * r);

    free(r1);
    free(r2);
    free(r3);
    free(r4);
    free(r5);
    free(r6);

    return EXIT_SUCCESS;
}