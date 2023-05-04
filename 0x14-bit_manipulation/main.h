#ifndef TEST
#define TEST
/**
 * pow - thre function that returns power
 * @a: the int a
 * @b: An int b
 * Return: power
 */
unsigned int pow(unsigned int a, unsigned int b)
{
	if (b < 0)
		return (0);
	while (b--)
		a *= a;
	return (a);
}
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
#endif
