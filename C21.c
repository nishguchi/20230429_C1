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

ret = function(a, &b); //funcion()�Œl������
	
printf("------\n");
printf("ret : %d\n", ret);	
printf("a : %d\n", a);
printf("b : %d\n", b);
	
//---------------------------------
	
int *c; //*��t���ă|�C���^�ϐ��쐬
int *d; //*��t���ă|�C���^�ϐ��쐬
int *e; //*��t���ă|�C���^�ϐ��쐬
	
int f = 500;
int g[] = {1, 2, 3};

c = &f; //c�� f�̃A�h���X������
d = &g[0]; //d�� g�̃A�h���X������(�擪[0]�w��)

	
d += 1;
e = d; //d �� g �� �����A�h���X�l�ɂȂ�
	   //d �̃A�h���X�� e �ɓ����]

/*  %p �̓A�h���X��16�i��8���ŕ\������ */
printf("------\n");
printf("c : %p\n", c);
printf("d : %p\n", d);//�����A�h���X
printf("e : %p\n", e);//�����A�h���X
printf("f : %d\n", f);


/*  ���ʂɒl��\��  */
printf("------\n");
printf("c : %d\n", *c);//f�� �A�h���X�̒��g���w���Bf�̒l
printf("d : %d\n", *d);//�����A�h���X  {1, 2, 3};  �l[1]
printf("e : %d\n", *e);//�����A�h���X  {1, 2, 3};  �l[1]


/*  ���ʂɒl��\�� �z��̗v�f�w�� */ 
//����������1
printf("------\n");
printf("c : %d\n", *c);//f�� �A�h���X�̒��g���w���Bf�̒l
printf("d : %d\n", *d-1);//�����A�h���X  {1, 2, 3};  �l[0]
printf("e : %d\n", *e-1);//�����A�h���X  {1, 2, 3};  �l[0]
	
//����������2
printf("------\n");
printf("c : %d\n", *c);//f�� �A�h���X�̒��g���w���Bf�̒l
printf("d : %d\n", *(d+1));//�����A�h���X  {1, 2, 3};  �l[2]
printf("e : %d\n", *(e+1));//�����A�h���X  {1, 2, 3};  �l[2]

	
	
return 0;
}
 
 
 //memo
 //---------------------------------
 //���ʂ̕ϐ����쐬
 //�|�C���^�ϐ����쐬
 //�|�C���^�ϐ��� �ʏ� &�ϐ� �ŃA�h���X�i�ꏊ�j���i�[
 
 
 //%d �� �ϐ��� �A�h���X�̒��g�̒l���Q��
 //%p �� *�ϐ� �ŃA�h���X�i�ꏊ�j��16�i���ŎQ�� 
 
 
 
 
 
 
