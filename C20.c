#include <stdio.h>

typedef struct
{
	char name[20];
	int age;
	char kigou;
} person_t;


int main(int argc, char *argv[])
{
	
person_t person1 = {"太郎", 10, 'A'};
person_t person2 = {"次郎", 11, 'B'};
person_t person3 = {"三郎", 12, 'C'};
person_t person4 = {"四郎", 13, 'D'};
	


printf("名前は%s、年齢は%d、型は%c\n", person1.name, person1.age, person1.kigou);
printf("名前は%s、年齢は%d、型は%c\n", person2.name, person2.age, person2.kigou);
printf("名前は%s、年齢は%d、型は%c\n", person3.name, person3.age, person3.kigou);
printf("名前は%s、年齢は%d、型は%c\n", person4.name, person4.age, person4.kigou);
	
return 0;
}

