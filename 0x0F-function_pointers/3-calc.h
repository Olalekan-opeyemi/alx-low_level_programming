#ifndef CAL_H
#define CAL_H
/**
 * struct op - A struct op.
 * @op: The struct name.
 * @f: The associated function.
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_addition(int a, int b);
int op_subtraction(int a, int b);
int op_multiply(int a, int b);
int op_divide(int a, int b);
int op_modulus(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif/*#ifndef CAL_H*/
