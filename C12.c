#include <stdio.h>



int a = 10;
int b = 5;

int main(int argc, char *argv[]){
	

	switch(a||b)
	{
		
		case 10:
			printf("�l��10�ł���");
			break;
		/*	
		case 5:
			printf("�l��5�ł���");
			break;
		*/
		case 10 || 5:
			printf("�l��10�܂���5�ł���2");
			break;
	}
	
	
}

