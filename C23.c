#include <stdio.h>

int function(long *p, int len)	// *p �� a[] �̃A�h���X������Blen �ɂ� 5 ������B
{
int i; //function() �� ���[�J���ϐ� i
	
long v = 100; //�ilong�^�j�ϐ�v�� 100������
for(i = 0; i < len; i++)
{
	*(p + i) = v; //a[i]�Ɠ����u  a[5]  �v
	v = v + 100;	// �ilong�^�j*p �ϐ��w��A�h���X�� �z�� a[i] �� v ������
}
return 1;
}



int main(int argc,  char *argv[])
{

long a[5];
	
int ret;
int i; //main() �� ���[�J���ϐ� i

ret = function(a, 5); // ������n��
printf("ret : %d\n", ret); // function() �� return �߂�l���A���Ă��� �u1�v
	
for(i = 0; i < 5; i++) //i���[�v 5�� (a[0]��1��ڂ�100����X�^�[�g)
{
	// ���[�v�̂��т� �z��l�̏o�͂��s��
	printf("a[%d] : %ld\n", i, a[i]); // i �� long a[5] ��\��

}

return 0;
}



