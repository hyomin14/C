#include <stdio.h>
#include <stdlib.h>

typedef struct  {	//����ü ����
	int		s_id;
	int		age;
}Student;

int main(void)
{
	Student s1;									//����ü ����
	Student* s2 = malloc(sizeof(Student));		//����ü ������, �޸� �Ҵ�

	// . ���� ����ü ����� ����
	s1.s_id = 20202020;
	s1.age = 20;
	//Student s1 = { .s_id = 20202020, .age = 20};

	//ȭ��ǥ �����ڷ� ����ü ����� ����
	s2->s_id = 20202040;
	s2->age = 20;

	printf("s1 �й� : %d, ���� : %d\n", s1.s_id, s1.age);
	printf("s2 �й� : %d, ���� : %d", s2->s_id, s2->age);

	free(s2);		//�޸� ����
	return 0;
}