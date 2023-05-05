#include <stdio.h>


typedef struct	// 構造体 固定
{
	int a;
	int b;
} data_t; // 構造体名


int calc_add(int x, int y)
{
	int ans = x + y;
	
	printf("\n");
	printf("calc_add() で計算をします。\n【data.a + data.b = %d】です", ans);
	
	return ans;
} 


int main(int argc, char *argv[])
{
	data_t data; //構造体名に名前を付ける （datat_t型 の data）
	int n;
	
	data.a = 10;
	data.b = 20;
	
	printf("data.aの値は%dです。\ndata.bの値は%dです。\n【data.a + data.b = %d】です。\n", data.a, data.b, n =data.a + data.b);

	calc_add(data.a, data.b);
	
	
return 0;
}



