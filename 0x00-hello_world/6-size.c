#include <stdio.h>

int main(void)
{
	int x;
	char a;
	long int moy;
	long long int prix;
	float electron;

	printf("Size of a char: %lu byte(s)", (unsigned long)sizeof(a));
	printf("Size of a int: %lu byte(s)", (unsigned long)sizeof(x));
	printf("Size of a long int: %lu byte(s)", (unsigned long)sizeof(moy));
	printf("Size of a long long int: %lu byte(s)", (unsigned long)sizeof(prix));
	printf("Size of a float: %lu byte(s)", (unsigned long)sizeof(electron));
	return (0);
}
