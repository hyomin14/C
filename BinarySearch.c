/*
����Ž�� : Ž���� �����͵��� ���ĵ� ����
�־��� �����͵��� ������ Ű �� ����

binarySearch(A[], first, last, key)
{
	if (first > last)		return -1;		//����Լ� Ż������

	mid <-- (first + last) / 2;
	if (key = A[mid])		return mid;
	else if (key < A[mid])	then binarySearch(A[], first, mid - 1, key);
	else if (key > A[mid])	then binarySearch(A[], mid + 1, last, key);

	return -1;	
}
*/

#include <stdio.h>

#define arrMAXSIZE 10

//����������
int		binarySearch(int* pArr, int first, int last, int key);
void	PRINT(int* pArr, int num);

int main(void)
{
	int key, index;
	int arr[arrMAXSIZE] = { 5,9,13,17,21,28,37,46,55,88 };

	printf("���� ������ : ");	PRINT(arr, arrMAXSIZE);
	while (1) {
		printf("�˻� ������ �Է�(�˻� ���� : 0) : ");
		scanf_s("%d", &key);
		if (key == 0)	break;

		index = binarySearch(arr, 0, arrMAXSIZE - 1, key);

		if (index == -1)		printf("�����Ͱ� �������� �ʽ��ϴ�.\n");
		else
			printf("�˻� ������ %d : %d ��° ��ġ \n", arr[index], index + 1);
	}

	return 0;
}

int		binarySearch(int* pArr, int first, int last, int key) {
	int mid;
	while (first <= last)
	{
		mid = (first + last) / 2;

		if (key == pArr[mid])		return mid;
		else if (key < pArr[mid])	last = mid - 1;
		else if (key > pArr[mid])	first = mid + 1;
	}

	return -1;
}

void	PRINT(int* pArr, int num) {
	for (int i = 0; i < num; i++)
		printf("%3d", *(pArr + i));
	printf("\n");
	return;
}