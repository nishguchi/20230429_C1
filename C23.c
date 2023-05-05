#include <stdio.h>

int function(long *p, int len)	// *p に a[] のアドレスが入る。len には 5 が入る。
{
int i; //function() 内 ローカル変数 i
	
long v = 100; //（long型）変数vに 100を入れる
for(i = 0; i < len; i++)
{
	*(p + i) = v; //a[i]と同じ「  a[5]  」
	v = v + 100;	// （long型）*p 変数指定アドレスの 配列 a[i] に v を入れる
}
return 1;
}



int main(int argc,  char *argv[])
{

long a[5];
	
int ret;
int i; //main() 内 ローカル変数 i

ret = function(a, 5); // 引数を渡す
printf("ret : %d\n", ret); // function() の return 戻り値が帰ってくる 「1」
	
for(i = 0; i < 5; i++) //iループ 5回 (a[0]＝1回目は100からスタート)
{
	// ループのたびに 配列値の出力を行う
	printf("a[%d] : %ld\n", i, a[i]); // i と long a[5] を表示

}

return 0;
}



