#include <stdio.h>

int main(int argc, char *argv[]){
	
for(int a = 0; a < 10; a++)
{
	if(a % 2 == 0)
	{
		printf("�y�Q�̔{���ł����z\n");
		continue; //2�Ŋ���؂��ꍇ�A�������Ȃ�
				  //���[�v�p�������i�R���e�j���[�j
	}
	printf("%d\n", a);
}
	
return 0;
}

