#include <stdio.h>

int main(int argc, char *argv[]){
	
	printf("test\n\n");
	
	
	
int i = 10;

while(i < 10)
{
	
	printf("すでに値は10なので実行されない。中身は%d\n", i++);
}
	
	
do
{
	
	printf("出力後、条件式が実行される。中身は%dです\n", i++);
} while(i < 10);
	
	return 0;
}

