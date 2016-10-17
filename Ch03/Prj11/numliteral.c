#include <stdio.h>

int main(void)
{
	printf("%d\n", 30);		printf("%d\n", 10);
	printf("%d\n", 030);	printf("%d\n", 010);
	printf("%d\n", 0X2F);	printf("%d\n", 0x1b);


	printf("%f ", 3.14);	printf("%f ", 2.0);
	printf("%f ", 3.14E+2);	printf("%f ", 21.8e2);
	printf("%f ", 3.14E-2);	printf("%f ", 218e-3);

	return 0;
}