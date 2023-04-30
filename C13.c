#include <stdio.h>


int n;
int ans; //3分割のあまりを格納

int main(int argc, char *argv[]){
	printf("入力値を3分割します\n");
	printf("文字を入力してください【数値→ Enter】\n");
	scanf("%d",&n);

	ans = n % 3;
	
	
	switch (ans){
		case 0:
			printf("nの値%dは、３等分すると あまりが 0です\n", ans);
			break;
		case 1:
			printf("nの値%dは、３等分すると あまりが 1です\n" , ans);
			break;
		case 2:
			printf("nの値%dは、３等分すると あまりが 2です\n", ans);
			break;
/*
		case 3:
			printf("nの値%dは、３等分すると あまりが 3です\n", ans);
			break;
		default:
			printf("nの値%dは、３等分すると あまりが 1、2、3 以外 です\n", ans);
*/
	}
	return 0;
}

