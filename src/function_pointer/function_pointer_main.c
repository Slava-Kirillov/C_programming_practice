/*
 * Указатель на функцию
 * Массив указателей на функцию
 */

#include <stdio.h>
#include "function_pointer.h"

int main() {

    int x = 10;
    int y = 5;

    message = hello;
    message();

    function = add;
    printf("%d + %d = %d \n", x, y, operation(function, x, y));
    function = subtract;
    printf("%d - %d = %d \n", x, y, operation(function, x, y));

    action = select();
    action();

    message = goodbye;
    message();

    return 0;
}
