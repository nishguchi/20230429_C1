#include <stdio.h>


int n;
int ans; //3�����̂��܂���i�[

int main(int argc, char *argv[]){
	printf("���͒l��3�������܂�\n");
	printf("��������͂��Ă��������y���l�� Enter�z\n");
	scanf("%d",&n);

	ans = n % 3;
	
	
	switch (ans){
		case 0:
			printf("n�̒l%d�́A�R��������� ���܂肪 0�ł�\n", ans);
			break;
		case 1:
			printf("n�̒l%d�́A�R��������� ���܂肪 1�ł�\n" , ans);
			break;
		case 2:
			printf("n�̒l%d�́A�R��������� ���܂肪 2�ł�\n", ans);
			break;
/*
		case 3:
			printf("n�̒l%d�́A�R��������� ���܂肪 3�ł�\n", ans);
			break;
		default:
			printf("n�̒l%d�́A�R��������� ���܂肪 1�A2�A3 �ȊO �ł�\n", ans);
*/
	}
	return 0;
}

