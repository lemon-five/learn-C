#define _CRT_SECURE_NO_WARNINGS					//ʹ��VS������ʱҪ������仰��ֹ����������ⱨ��
#include<stdio.h>								//�������ͷ�ļ�
//������ѧϰ
int a = 10; //ȫ�ֱ���
int sum() {
	printf("sum������a��ֵΪ%d\n",a);	
	//�˴�aΪȫ�ֱ�������������Ϊ����������������ڣ������ڲ�ͬ����֮�����
	return 0;
	}
int size() {
	printf("charռ%d�ֽ�\n",sizeof(char));			//���char��ռ���ֽ�
	printf("shortռ%d�ֽ�\n", sizeof(short));		
	printf("intռ%d�ֽ�\n", sizeof(int));
	printf("longռ%d�ֽ�\n", sizeof(long));
	printf("long long ռ%d�ֽ�\n", sizeof(long long));
	printf("floatռ%d�ֽ�\n", sizeof(float));
	printf("doubleռ%d�ֽ�\n", sizeof(double));
	return 0;
	
}
int main() {					//�˴�Ϊ������������ֻ��һ������һ����������
	{	
		size();
		printf("   \n");
		sum();//ִ��sum����
		printf("   \n");
		int b = 20;
		printf("b��ֵ��%d\n",b);
	}					//�ֲ�����b����������Ϊb���ڵ�{}��5-8�У�
	int a = 30;			//�ֲ�������ȫ�ֱ�����������ͬʱ��ȡ�ֲ�����
	int c = 40;			//�ֲ�����c
	printf("a��ֵ��%d\n",a);
//	printf("b��ֵ��%d\n", b); //�������д��뽫�ᱨ����Ϊ�ֲ�����b�ڴ˴����������Ѿ�����
	printf("c��ֵ��%d\n", c);
	return 0;
}