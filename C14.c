#include <stdio.h>

int main(int argc, char *argv[]){

int i;
	
printf("�o�̓J�E���g i++��");
for(i = 0; i < 10; i++)
{
	printf("%d/", i);

}
	
	

printf("\n�o�̓J�E���g ++i��");	
for(i = 0; i < 10; ++i)
{
	printf("%d/", i);

}
	
	
printf("\n�o�̓J�E���g i--��");
for(i = 10; i > 0; i--)
{
	printf("%d/", i);

}
	

printf("\n�o�̓J�E���g --i��");	
for(i = 10; i > 0; --i)
{
	printf("%d/", i);

}
	
	return 0;
}

