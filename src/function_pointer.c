#include <stdio.h>

void hello(void) {
    printf("Hello, World\n");
}

void goodbye(void) {
    printf("Good Bye, World\n");
}

int add(int x, int y) {
    return x + y;
}

int subtract(int x, int y) {
    return x - y;
}

int action1(void) {
    printf("Выполнено действие 1 \n");
    return 1;
}

int action2(void) {
    printf("Выполнено действие 2 \n");
    return 2;
}

int action3(void) {
    printf("Выполнено действие 3 \n");
    return 3;
}

int operation(int (*func)(int, int), int a, int b) {
    return func(a, b);
}

int (*select(void))(void) {
    int choice;

    int (*actions[])(void) = {action1, action2, action3}; // массив указателей на функцию

    printf("Выберите дейтвие (1, 2, 3): ");
    scanf("%d", &choice);

    if (choice > 0 && choice < 4) {
        return actions[choice - 1]; // вернуть указатель на функцию
    } else {
        return NULL;
    }
}

