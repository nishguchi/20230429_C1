#include <stdio.h>



int a = 10;
int b = 5;

int main(int argc, char *argv[]){
	

	switch(a||b)
	{
		
		case 10:
			printf("値は10でした");
			break;
		/*	
		case 5:
			printf("値は5でした");
			break;
		*/
		case 10 || 5:
			printf("値は10または5でした2");
			break;
	}
	
	
}

