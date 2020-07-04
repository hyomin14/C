#include <stdio.h>
#include <stdlib.h>		//malloc, free

int main(void)
{
	int		num1 = 10;		//일반 변수
	int* numPtr1;			//포인터형 변수

	numPtr1 = &num1;

	int* numPtr2;
	numPtr2 = malloc(sizeof(int));		//int 크기만큼 동적메모리 할당
	printf("%p\n", numPtr2);

	//*p == a
	printf("num1 : %d\n", num1);		//직접 접근
	printf("num1 : %d\n", *numPtr1);	//간접 접근

	//p == &a
	printf("&num1 : %p\n", &num1);
	printf("&num1 : %p\n", numPtr1);

	//&p
	printf("&numPtr1 : %p\n", &numPtr1);
	printf("&numPtr2 : %p\n", &numPtr2);

	free(numPtr2);		//메모리 해제

	return 0;
}