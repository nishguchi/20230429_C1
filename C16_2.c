#include <stdio.h>

int main(int argc, char *argv[]){
	
for(int a = 0; a < 10; a++)
{
	if(a % 2 == 0)
	{
		printf("【２の倍数でした】\n");
		continue; //2で割り切れる場合、何もしない
				  //ループ継続処理（コンテニュー）
	}
	printf("%d\n", a);
}
	
return 0;
}

