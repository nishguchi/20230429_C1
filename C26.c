#include <stdio.h>


typedef struct	// �\���� �Œ�
{
	int a;
	int b;
} data_t; // �\���̖�


int calc_add(int x, int y)
{
	int ans = x + y;
	
	printf("\n");
	printf("calc_add() �Ōv�Z�����܂��B\n�ydata.a + data.b = %d�z�ł�", ans);
	
	return ans;
} 


int main(int argc, char *argv[])
{
	data_t data; //�\���̖��ɖ��O��t���� �idatat_t�^ �� data�j
	int n;
	
	data.a = 10;
	data.b = 20;
	
	printf("data.a�̒l��%d�ł��B\ndata.b�̒l��%d�ł��B\n�ydata.a + data.b = %d�z�ł��B\n", data.a, data.b, n =data.a + data.b);

	calc_add(data.a, data.b);
	
	
return 0;
}



