#include <stdio.h>

typedef struct
{
	char name[20];
	int age;
	char kigou;
} person_t;


int main(int argc, char *argv[])
{
	
person_t person1 = {"���Y", 10, 'A'};
person_t person2 = {"���Y", 11, 'B'};
person_t person3 = {"�O�Y", 12, 'C'};
person_t person4 = {"�l�Y", 13, 'D'};
	


printf("���O��%s�A�N���%d�A�^��%c\n", person1.name, person1.age, person1.kigou);
printf("���O��%s�A�N���%d�A�^��%c\n", person2.name, person2.age, person2.kigou);
printf("���O��%s�A�N���%d�A�^��%c\n", person3.name, person3.age, person3.kigou);
printf("���O��%s�A�N���%d�A�^��%c\n", person4.name, person4.age, person4.kigou);

}

