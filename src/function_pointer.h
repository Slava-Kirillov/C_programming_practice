#ifndef TESTPROJECT_FUNCTION_POINTER_H
#define TESTPROJECT_FUNCTION_POINTER_H

/*
 * Указатель на функцию, которая ничего не принимает и не возвращает
 */
void (*message)(void);

/*
 * Указатель на функцию, которая принимает два значения int и возвращает int
 */
int (*function)(int, int);

/*
 * Указатель на функию, которая возвращает int и ничего не принимает
 */
int (*action)(void);

/*
 * Функция, принимающая на вход указатель на функцию
 * и два значения типа int и возвращающая значение типа int
 */
int operation(int (*func)(int, int), int a, int b);

/*
 * Функция, возвращающая указатель на функцию
 */
int (*select(void))(void);

void hello(void);

void goodbye(void);

int add(int x, int y);

int subtract(int x, int y);

int action1(void);

int action2(void);

int action3(void);

#endif //TESTPROJECT_FUNCTION_POINTER_H
