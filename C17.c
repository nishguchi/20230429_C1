#include <stdio.h>

int main(int argc, char *argv[]){

int n =1;

while(n <= 3)
{	
	for(int a =1; a <= 3; a++)
	{
		printf("(%d,%d)\n", n,a); //(1, 1)‚©‚ç(3, 3)‚Ü‚Å
	}
	n = n +1;
}
return 0;
}

