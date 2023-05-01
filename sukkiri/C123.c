#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef char String[1024];

int main(void)
{

printf("カレンダーから縦に並んだ数字3つを選び、その合計を入力してください\n");
String numStr;
scanf("%s", numStr);

	int num = atoi(numStr) / 3; // 入力文字列を数値に変換。3つに分ける
	printf("あなたが選んだ数字は%dと%dと%dですね？\n", num - 7, num, num + 7);
	
}




