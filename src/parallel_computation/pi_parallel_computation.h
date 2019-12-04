#ifndef PARALLEL_COMPUTATION_PI_PARALLEL_COMPUTATION_H
#define PARALLEL_COMPUTATION_PI_PARALLEL_COMPUTATION_H

#include <malloc.h>

struct par {
    int b, e;
    double a, h;
};

double f(double x);
void *sum(void *p);

#endif //PARALLEL_COMPUTATION_PI_PARALLEL_COMPUTATION_H
