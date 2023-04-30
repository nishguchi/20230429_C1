#include <stdio.h>



int a = 10;
int b = 5;

int main(int argc, char *argv[]){
	

	switch(a||b)
	{
		
		case 10:
			printf("’l‚Í10‚Å‚µ‚½");
			break;
		/*	
		case 5:
			printf("’l‚Í5‚Å‚µ‚½");
			break;
		*/
		case 10 || 5:
			printf("’l‚Í10‚Ü‚½‚Í5‚Å‚µ‚½2");
			break;
	}
	
	
}

