//pass by Value
#include <stdio.h>

void SWAP(int, int);

int main(void)
{
	int		a = 10, b = 20;

	printf("호출 전 : a = %d, b = %d\n", a, b);
	SWAP(a, b);
	printf("호출 후 : a = %d, b = %d\n", a, b);

	return 0;
}

void SWAP(int a, int b) {
	int		temp;

	temp = a;
	a = b;
	b = temp;
}


/*
//pass by Address
#include <stdio.h>

void SWAP(int*, int*);

int main(void)
{
	int		a = 10, b = 20;

	printf("호출 전 : a = %d, b = %d\n", a, b);
	SWAP(&a, &b);
	printf("호출 후 : a = %d, b = %d\n", a, b);

	return 0;
}

void SWAP(int* pa, int* pb) {
	int		temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

*/