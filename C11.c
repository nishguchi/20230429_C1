#include <stdio.h>



int a = 10;
int b = 5;

int main(int argc, char *argv[]){

	printf("今のa の 値は %d です\n", a);

	// 左辺は 右辺より 大きい
	if(a > 10){
		printf("a > 10→ aは10より大きいです\n");
		
	}

	// 左辺は 右辺より 小さい
	if(a < 10)
	{
		printf("a < 10→ aは10より小さいです\n");
		
	}
	
	// 左辺は 右辺は等しい
	if(a == 10)
	{
		printf("a == 10→ aは10と等しいです\n");
		
	}


	// 左辺は 右辺 以上です
	if(a >= 10)
	{
		printf("a >= 10→ aは10以上です(10含む)\n");
		
	}

	// 左辺は 右辺 以下です
	if(a <= 10)
	{
		printf("a <= 10→ aは10以下です(10含む)\n");
		
	}


	// 左辺は 右辺 と 等しくありません
	if(a != 10)
	{
		printf("a != 10→ aは10と等しくないです\n");
		
	}




	// if else 文 その1
	if(a >= b &&  a != b)
	{
		printf("aの値%dは、bの値%dよりも大きい。かつaとbの値は等しくありません\n", a,b);
	}
	else
	{
		printf("条件を満たしません1");
	}
	
	// if else 文 その2
	
	if(a <= b &&  a != b)
	{
		printf("aの値%dは、bの値%dよりも小さい。かつaとbの値は等しくありません\n", a,b);
	}
	else
	{
		printf("条件を満たしません2");
	}
	

}





