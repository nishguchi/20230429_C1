#include <stdio.h>

int main(int argc, char *argv[]){

int a[5] = {1, 2, 3, 4, 5};
int b[][5] = {{1, 2, 3, 4, 5},{1, 2, 3, 4, 5},{1, 2, 3, 4, 5}};
	
for(int i = 0; i < sizeof(a)/sizeof(a[0]); i++) // <= ‚ÍNG
{
	printf("a[%d]‚Ì —v‘f‚Í %d\n", a[i]-1, a[i]);
}	

printf("\na[]‚Ì —v‘f”‚Í %d\n", sizeof(a)/sizeof(a[0]));

printf("\nb[0][4]‚Ì —v‘f‚Í %d", b[0][4]);

return 0;
}

