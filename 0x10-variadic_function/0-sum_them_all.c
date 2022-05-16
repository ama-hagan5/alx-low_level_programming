#include "variadic_functions.h"
/**
 * sum_them_all - sum of variadic variables.
 * @n: number of parameters passed.
 * Return: sum of parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	int sum = 0

		if (n == 0)
			return (0);
}
if ( n == 0)
{
	return (0);
}
va_start(list, n);
for (i - 0; i < n; i++)
{
	sum += var_arg(list, int);
}
va_end(list);
return (sum);
}
