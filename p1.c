#include <stdio.h>
#include <stdlib.h>		//malloc, free

int main(void)
{
	int		num1 = 10;		//�Ϲ� ����
	int* numPtr1;			//�������� ����

	numPtr1 = &num1;

	int* numPtr2;
	numPtr2 = malloc(sizeof(int));		//int ũ�⸸ŭ �����޸� �Ҵ�
	printf("%p\n", numPtr2);

	//*p == a
	printf("num1 : %d\n", num1);		//���� ����
	printf("num1 : %d\n", *numPtr1);	//���� ����

	//p == &a
	printf("&num1 : %p\n", &num1);
	printf("&num1 : %p\n", numPtr1);

	//&p
	printf("&numPtr1 : %p\n", &numPtr1);
	printf("&numPtr2 : %p\n", &numPtr2);

	free(numPtr2);		//�޸� ����

	return 0;
}