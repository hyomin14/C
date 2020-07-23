/*
트리 : 노드로 이루어진 자료구조
비선형 자료구조(계층적), 사이클 없음

4개의 노드가 있는 트리 만들기
		1
	   / \
	  2   3
	 /
    4
*/

//코드 참조 : https://www.geeksforgeeks.org/binary-tree-set-1-introduction/
#include <stdio.h>
#include <stdlib.h>

struct node					//노드 구조체
{
	int data;
	struct node* left;		//왼쪽 자식
	struct node* right;		//오른쪽 자식
};

struct node* newNode(int data);

int main(void)
{
	struct node* root = newNode(1);		//루트 노드 생성

	root->left = newNode(2);			//루트의 왼쪽 자식 값 = 2	
	root->right = newNode(3);			//루트의 오른쪽 자식 값 = 3
	root->left->left = newNode(4);		//루트의 왼쪽 자식의 왼쪽 자식 값 = 4

	return 0;
}

struct node* newNode(int data)		//주어진 데이터와 좌우 널포인터로 노드 생성
{
	struct node* node = (struct node*)malloc(sizeof(struct node));		//메모리 동적 할당

	node->data = data;				//입력한 데이터 값을 노드에 저장
	node->left = NULL;				//왼쪽, 오른쪽 자식을 초기화
	node->right = NULL;

	return node;
}
