#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef char String[1024];

int main(void)
{

printf("�J�����_�[����c�ɕ��񂾐���3��I�сA���̍��v����͂��Ă�������\n");
String numStr;
scanf("%s", numStr);

	int num = atoi(numStr) / 3; // ���͕�����𐔒l�ɕϊ��B3�ɕ�����
	printf("���Ȃ����I�񂾐�����%d��%d��%d�ł��ˁH\n", num - 7, num, num + 7);
	
}




