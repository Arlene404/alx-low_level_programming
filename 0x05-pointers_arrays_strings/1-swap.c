/**
 * swap_int - swap the values of two numbers
 * using 2 input parameters
 *
 * @a: input parameter 1
 * @b: input parameter 2
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
