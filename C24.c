#include <stdio.h>
#include <string.h>
#include "C24_header.h"//C24_header.h を呼び出す


/*構造体型  仮引数 p1の値を出力(第１引数)*/
/*構造体型  仮引数 *p2の値を出力(第２引数)*/
//引数を渡すと、*p2 メモリ領域が確保される(ポインタ渡し)
void function(person_t p1, person_t *p2)
{
	printf("name=%s\n",p1.name);//p1の値を出力
	printf("age=%d\n", p1.age); //p1の値を出力

	printf("name=%s\n",p2->name);//*p2の値を ->で指定出力
	printf("age=%d\n", p2->age); //*p2の値を ->で指定出力
}


int main()
{
	/*構造体 person_tを "C24_header.h"に 用意*/
	/*構造体変数を2つ用意*/
	//person_t person;
	//person_t person2;
	
	
	/*構造体メンバを初期化 構造体の定義にある順番に各メンバの値となる*/
	/*構造体変数に値セット*/
	/*パターン1*/
/*	person_t person = { .name = "taro\0", .age = 10}; //personの初期化とメンバに値代入
	person_t person2 = { .name = "jiro\0", .age = 5}; //person2の初期化とメンバに値代入
*/
	/*構造体変数に値セット*/
	/*パターン2*/
/*	
	person_t person = { "taro\0", 10}; //personの初期化とメンバに値代入
	person_t person2 = { "jiro\0", 5}; //person2の初期化とメンバに値代入
*/
	/*構造体変数に値セット*/
	/*パターン3*/
/*	person_t person = { "taro\0", 10}; //person の初期化とメンバに値代入
	person_t person2; //person2を初期化
	person2 = person; //personに person2を代入
*/	
	/*構造体変数に値セット*/
	/*パターン4*/
	person_t person; 				//personを初期化
	strcpy(person.name, "taro\0");  //person.name に第２引数の値をコピー
	person.age = 10;				//person2.ageに値を代入	
	
	person_t person2;				//person2を初期化
	strcpy(person2.name, "jiro\0"); //person2.name に第２引数の値をコピー
	person2.age = 5;				//person2.ageに値を代入	

	
	/* "C24_header.h"  p1に person1の 引数を渡す */
	/* "C24_header.h" *p2に person2の アドレスを渡す （先頭 & で、ポインタ渡しを行う）*/
	function(person, &person2);//fuction 関数に 引数を セット

	return 0;
}



