#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
  * get_op_func - A funct that selects the right func
  * @s: Operator passed as arg
  *
  * Return: 0
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{ "+", op_add },
	{ "-", op_sub },
	{ "*", op_mul },
	{ "/", op_div },
	{ "%", op_mod },
	{ NULL, NULL }
	};
	int t = 0;

	while (t < 5)
	{
		if (strcmp(s, ops[t].op) == 0)
			return (ops[t].f);

		t++;
	}

	return (0);
}
