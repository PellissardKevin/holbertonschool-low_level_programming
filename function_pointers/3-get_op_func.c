#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_functuion - select the correct function
 * @s: string of get p function
 * Return: Integer and function
 */
int (*get_op_func(char *s))(int, int)
{
	    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
	int i = 0;

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);

			i++;
	}
}
