#include <stdio.h>
#include <string.h>
#include "C24_header.h"//C24_header.h ���Ăяo��


/*�\���̌^  ������ p1�̒l���o��(��P����)*/
/*�\���̌^  ������ *p2�̒l���o��(��Q����)*/
//������n���ƁA*p2 �������̈悪�m�ۂ����(�|�C���^�n��)
void function(person_t p1, person_t *p2)
{
	printf("name=%s\n",p1.name);//p1�̒l���o��
	printf("age=%d\n", p1.age); //p1�̒l���o��

	printf("name=%s\n",p2->name);//*p2�̒l�� ->�Ŏw��o��
	printf("age=%d\n", p2->age); //*p2�̒l�� ->�Ŏw��o��
}


int main()
{
	/*�\���� person_t�� "C24_header.h"�� �p��*/
	/*�\���̕ϐ���2�p��*/
	//person_t person;
	//person_t person2;
	
	
	/*�\���̃����o�������� �\���̂̒�`�ɂ��鏇�ԂɊe�����o�̒l�ƂȂ�*/
	/*�\���̕ϐ��ɒl�Z�b�g*/
	/*�p�^�[��1*/
/*	person_t person = { .name = "taro\0", .age = 10}; //person�̏������ƃ����o�ɒl���
	person_t person2 = { .name = "jiro\0", .age = 5}; //person2�̏������ƃ����o�ɒl���
*/
	/*�\���̕ϐ��ɒl�Z�b�g*/
	/*�p�^�[��2*/
/*	
	person_t person = { "taro\0", 10}; //person�̏������ƃ����o�ɒl���
	person_t person2 = { "jiro\0", 5}; //person2�̏������ƃ����o�ɒl���
*/
	/*�\���̕ϐ��ɒl�Z�b�g*/
	/*�p�^�[��3*/
/*	person_t person = { "taro\0", 10}; //person �̏������ƃ����o�ɒl���
	person_t person2; //person2��������
	person2 = person; //person�� person2����
*/	
	/*�\���̕ϐ��ɒl�Z�b�g*/
	/*�p�^�[��4*/
	person_t person; 				//person��������
	strcpy(person.name, "taro\0");  //person.name �ɑ�Q�����̒l���R�s�[
	person.age = 10;				//person2.age�ɒl����	
	
	person_t person2;				//person2��������
	strcpy(person2.name, "jiro\0"); //person2.name �ɑ�Q�����̒l���R�s�[
	person2.age = 5;				//person2.age�ɒl����	

	
	/* "C24_header.h"  p1�� person1�� ������n�� */
	/* "C24_header.h" *p2�� person2�� �A�h���X��n�� �i�擪 & �ŁA�|�C���^�n�����s���j*/
	function(person, &person2);//fuction �֐��� ������ �Z�b�g

	return 0;
}



