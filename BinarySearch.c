/*
이진탐색 : 탐색할 데이터들은 정렬된 상태
주어진 데이터들은 유일한 키 값 가짐

binarySearch(A[], first, last, key)
{
	if (first > last)		return -1;		//재귀함수 탈출조건

	mid <-- (first + last) / 2;
	if (key = A[mid])		return mid;
	else if (key < A[mid])	then binarySearch(A[], first, mid - 1, key);
	else if (key > A[mid])	then binarySearch(A[], mid + 1, last, key);

	return -1;	
}
*/

#include <stdio.h>

#define arrMAXSIZE 10

//비재귀적용법
int		binarySearch(int* pArr, int first, int last, int key);
void	PRINT(int* pArr, int num);

int main(void)
{
	int key, index;
	int arr[arrMAXSIZE] = { 5,9,13,17,21,28,37,46,55,88 };

	printf("원시 데이터 : ");	PRINT(arr, arrMAXSIZE);
	while (1) {
		printf("검색 데이터 입력(검색 종료 : 0) : ");
		scanf_s("%d", &key);
		if (key == 0)	break;

		index = binarySearch(arr, 0, arrMAXSIZE - 1, key);

		if (index == -1)		printf("데이터가 존재하지 않습니다.\n");
		else
			printf("검색 데이터 %d : %d 번째 위치 \n", arr[index], index + 1);
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