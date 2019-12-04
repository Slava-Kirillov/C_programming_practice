#include "parallel_computation.h"

double f(double x) {
    return 1 / (1 + x * x);
}

void *sum(void *p) {
    double *r;
    struct par *p1 = (struct par *) p;
    int i;
    r = (double *) malloc(sizeof(double));
    *r = 0.0;
    for (i = p1->b; i <= p1->e; i++)
        *r += f(p1->a + p1->h * i);
    free(p);
    return r;
}
