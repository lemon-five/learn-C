#define _CRT_SECURE_NO_WA
#define six 6
#include<stdio.h>

int main() {
	//test1();
	//test2();
	test3();
	return 0;
}
int test1() {						
	int num1 = 0;
	const	int num2 = 0;				//const-�����ԣ�	��ʱ����numΪconst���εĳ�������
	num1 = 8;
	//	num2 = 8;							//������仰�ᱨ��
	printf("num1��ֵ��%d\n", num1);
	printf("num2��ֵ��%d\n", num2);
	return 0;
}
int test2() {							//�Գ��������в���
	const C = 5;
	int arc[5];							//����һ������Ϊ5������,5�����泣��
	int ard[six];						//�˴�sixΪ#defend����ı�ʶ��������ʹ����Ϊ6
//	int ard[n] ;						//������仰�ᱨ����ΪnΪ�����������ǳ������޷�����5ʹ��
	return 0;
}
int test3() {							//ö�ٳ���		��һһ�оٵ����޸�����
	enum SEX {							
		boy,
		girl
	};
	enum SEX xiaoming = boy;			//�������С���Ա�Ϊ��
	return 0;
}