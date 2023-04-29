
#include <stdio.h>

int main(int argc, char *argv[])
{
	double a = 0.00;
	
	while(a <= 0.1)
	{
		printf("a = %lf\n",a);
		a = a + 0.01;
	}
	return 0;
}

