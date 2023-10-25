#ifndef CALC_HE
#define CALC_HE
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * struct op - Struct op
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, b);
int op_div(int a, b);
int op_mod(int a, b);

#endif
