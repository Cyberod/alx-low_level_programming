#include <stdio.h>
#include "3-calc.h"
/**
 * get_op_func -> function pointer that selects the correct function to perform
 * the operation asked by the user
 * @s: the operator given by the user
 * Return: pointer to the function that corresponds to the
 * operator given as a parameter
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", opp_add},
		{"-", opp_sub},
		{"*", opp_mul},
		{"/", opp_div},
		{"%", opp_mod}
	};
	int i;

	i = 0;

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
