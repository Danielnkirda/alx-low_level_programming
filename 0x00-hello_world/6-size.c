#inclu#include <stdio.h>

/**
 * main - print differnt var sizes
 *
 * Return: Always 0 (c is successful)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size of char:%d byte($)\n",sizeof(a));
	printf("size of int:%d byte($)\n",sizeof(b));
	printf("size of long int:%d byte($)\n",sizeof(e));
	printf("size of long long int:%d byte($)\n",sizeof(d));
	printf("size of a float:%d byte($)\n",sizeof(f));
	return (0);
}
