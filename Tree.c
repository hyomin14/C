/*
Ʈ�� : ���� �̷���� �ڷᱸ��
���� �ڷᱸ��(������), ����Ŭ ����

4���� ��尡 �ִ� Ʈ�� �����
		1
	   / \
	  2   3
	 /
    4
*/

//�ڵ� ���� : https://www.geeksforgeeks.org/binary-tree-set-1-introduction/
#include <stdio.h>
#include <stdlib.h>

struct node					//��� ����ü
{
	int data;
	struct node* left;		//���� �ڽ�
	struct node* right;		//������ �ڽ�
};

struct node* newNode(int data);

int main(void)
{
	struct node* root = newNode(1);		//��Ʈ ��� ����

	root->left = newNode(2);			//��Ʈ�� ���� �ڽ� �� = 2	
	root->right = newNode(3);			//��Ʈ�� ������ �ڽ� �� = 3
	root->left->left = newNode(4);		//��Ʈ�� ���� �ڽ��� ���� �ڽ� �� = 4

	return 0;
}

struct node* newNode(int data)		//�־��� �����Ϳ� �¿� �������ͷ� ��� ����
{
	struct node* node = (struct node*)malloc(sizeof(struct node));		//�޸� ���� �Ҵ�

	node->data = data;				//�Է��� ������ ���� ��忡 ����
	node->left = NULL;				//����, ������ �ڽ��� �ʱ�ȭ
	node->right = NULL;

	return node;
}
