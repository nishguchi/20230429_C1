#include <stdio.h>

int main(int argc, char *argv[]){

int i;
	
printf("出力カウント i++→");
for(i = 0; i < 10; i++)
{
	printf("%d/", i);

}
	
	

printf("\n出力カウント ++i→");	
for(i = 0; i < 10; ++i)
{
	printf("%d/", i);

}
	
	
printf("\n出力カウント i--→");
for(i = 10; i > 0; i--)
{
	printf("%d/", i);

}
	

printf("\n出力カウント --i→");	
for(i = 10; i > 0; --i)
{
	printf("%d/", i);

}
	
	return 0;
}

