#include <stdio.h>

int main(int argc, char *argv[]){

int a[5] = {1, 2, 3, 4, 5};
int b[][5] = {{1, 2, 3, 4, 5},{1, 2, 3, 4, 5},{1, 2, 3, 4, 5}};
	
for(int i = 0; i < sizeof(a)/sizeof(a[0]); i++) // <= はNG
{
	printf("a[%d]の 要素は %d\n", a[i]-1, a[i]);
}	

printf("\na[]の 要素数は %d\n", sizeof(a)/sizeof(a[0]));

printf("\nb[0][4]の 要素は %d", b[0][4]);

return 0;
}

