#include <stdio.h>

int function(int p, int *q)
{
	p = 10;
	*q = 300;
	
	printf("p=a : %d\n", p);
	
	return 1;

}



int main(int argc, char *argv[])
{

int a = 100;
int b = 200;
int ret;

printf("a : %d\n", a);
printf("b : %d\n", b);

ret = function(a, &b); //funcion()で値を処理
	
printf("------\n");
printf("ret : %d\n", ret);	
printf("a : %d\n", a);
printf("b : %d\n", b);
	
//---------------------------------
	
int *c; //*を付けてポインタ変数作成
int *d; //*を付けてポインタ変数作成
int *e; //*を付けてポインタ変数作成
	
int f = 500;
int g[] = {1, 2, 3};

c = &f; //cに fのアドレスを入れる
d = &g[0]; //dに gのアドレスを入れる(先頭[0]指定)

	
d += 1;
e = d; //d と g は 同じアドレス値になる
	   //d のアドレスを e に入れる]

/*  %p はアドレスを16進数8桁で表示する */
printf("------\n");
printf("c : %p\n", c);
printf("d : %p\n", d);//同じアドレス
printf("e : %p\n", e);//同じアドレス
printf("f : %d\n", f);


/*  普通に値を表示  */
printf("------\n");
printf("c : %d\n", *c);//fの アドレスの中身を指す。fの値
printf("d : %d\n", *d);//同じアドレス  {1, 2, 3};  値[1]
printf("e : %d\n", *e);//同じアドレス  {1, 2, 3};  値[1]


/*  普通に値を表示 配列の要素指定 */ 
//書き方その1
printf("------\n");
printf("c : %d\n", *c);//fの アドレスの中身を指す。fの値
printf("d : %d\n", *d-1);//同じアドレス  {1, 2, 3};  値[0]
printf("e : %d\n", *e-1);//同じアドレス  {1, 2, 3};  値[0]
	
//書き方その2
printf("------\n");
printf("c : %d\n", *c);//fの アドレスの中身を指す。fの値
printf("d : %d\n", *(d+1));//同じアドレス  {1, 2, 3};  値[2]
printf("e : %d\n", *(e+1));//同じアドレス  {1, 2, 3};  値[2]

	
	
return 0;
}
 
 
 //memo
 //---------------------------------
 //普通の変数を作成
 //ポインタ変数を作成
 //ポインタ変数に 通常 &変数 でアドレス（場所）を格納
 
 
 //%d と 変数で アドレスの中身の値を参照
 //%p と *変数 でアドレス（場所）を16進数で参照 
 
 
 
 
 
 
