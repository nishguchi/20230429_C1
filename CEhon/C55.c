#include <stdio.h>

int main()
{
	int x,y;
	char c;
	
	for(x = 2; x < 8; x++)
		printf("16: 10:c|");
	printf("\n");// for�����I���������s
	for(x = 2; x < 8; x++)
		printf(" ------ +");
	printf("\n");// for�����I���������s
	
	for(y = 0; y < 16; y++)
	{
		for(x = 2; x < 8; x++)
		{
			c = x * 16 + y;
			printf("%2x:%3d:%c|", c, c, c);
		}
		printf("\n");
	}
}


