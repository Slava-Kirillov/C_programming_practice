#include <stdio.h>

void hello(void) {
    printf("Hello, Slava\n");
}

void goodbye(void) {
    printf("Good Bye, Slava\n");
}

int add(int x, int y) {
    return x + y;
}

int subtract(int x, int y) {
    return x - y;
}

int operation(int (*func) (int, int), int a, int b) {
    return func(a, b);
}

int main() {
    void (*message) (void);
    message = hello;
    message();

    int x = 10;
    int y = 5;

    int (*function) (int, int);

    function = add;

    printf("%d + %d = %d \n", x, y, operation(function, x, y));

    function = subtract;

    printf("%d - %d = %d \n", x, y, operation(function, x, y));

    message = goodbye;
    message();

    return 0;
}
