#include "main.h"

/**
 * swap_int -> given two integers swap the values they are holdng
 * @a: first parameter
 * @b: second parameter
 * Return: sucess 1
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
