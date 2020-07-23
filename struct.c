#include <stdio.h>
#include <stdlib.h>

typedef struct  {	//구조체 정의
	int		s_id;
	int		age;
}Student;

int main(void)
{
	Student s1;									//구조체 변수
	Student* s2 = malloc(sizeof(Student));		//구조체 포인터, 메모리 할당

	// . 으로 구조체 멤버에 접근
	s1.s_id = 20202020;
	s1.age = 20;
	//Student s1 = { .s_id = 20202020, .age = 20};

	//화살표 연산자로 구조체 멤버에 접근
	s2->s_id = 20202040;
	s2->age = 20;

	printf("s1 학번 : %d, 나이 : %d\n", s1.s_id, s1.age);
	printf("s2 학번 : %d, 나이 : %d", s2->s_id, s2->age);

	free(s2);		//메모리 해제
	return 0;
}