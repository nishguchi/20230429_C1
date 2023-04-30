#include <stdio.h>

int main(int argc, char *argv[]){
	
for(int a = 0; a < 10; a++)
{
	if(a % 2 == 0)
	{
		printf("y‚Q‚Ì”{”‚Å‚µ‚½z\n");
		continue; //2‚ÅŠ„‚èØ‚ê‚éê‡A‰½‚à‚µ‚È‚¢
				  //ƒ‹[ƒvŒp‘±ˆ—iƒRƒ“ƒeƒjƒ…[j
	}
	printf("%d\n", a);
}
	
return 0;
}

