#include <stdio.h>

int main(int argc, char *argv[]){

int a[5] = {1, 2, 3, 4, 5};
int b[][5] = {{1, 2, 3, 4, 5},{1, 2, 3, 4, 5},{1, 2, 3, 4, 5}};
	
for(int i = 0; i < sizeof(a)/sizeof(a[0]); i++) // <= ��NG
{
	printf("a[%d]�� �v�f�� %d\n", a[i]-1, a[i]);
}	

printf("\na[]�� �v�f���� %d\n", sizeof(a)/sizeof(a[0]));

printf("\nb[0][4]�� �v�f�� %d", b[0][4]);

return 0;
}

