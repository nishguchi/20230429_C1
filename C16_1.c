#include <stdio.h>

int main(int argc, char *argv[]){
	
int a = 0;

while(1)
{
	if(a == 10)
	{
		break;
	}
	a = a + 1;
	printf("%d\n", a);
}
printf("【aが%dになったのでループらから抜けました。】", a);
	
return 0;
}

