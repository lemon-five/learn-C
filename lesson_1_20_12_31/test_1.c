#define _CRT_SECURE_NO_WARNINGS					//使用VS编译器时要加上这句话防止因编译器问题报错
#include<stdio.h>								//输入输出头文件
//变量的学习
int a = 10; //全局变量
int sum() {
	printf("sum函数中a的值为%d\n",a);	
	//此处a为全局变量，生命周期为整个程序的生命周期，可以在不同函数之间调动
	return 0;
	}
int size() {
	printf("char占%d字节\n",sizeof(char));			//输出char所占的字节
	printf("short占%d字节\n", sizeof(short));		
	printf("int占%d字节\n", sizeof(int));
	printf("long占%d字节\n", sizeof(long));
	printf("long long 占%d字节\n", sizeof(long long));
	printf("float占%d字节\n", sizeof(float));
	printf("double占%d字节\n", sizeof(double));
	return 0;
	
}
int main() {					//此处为主函数，有且只有一个，是一个程序的入口
	{	
		size();
		printf("   \n");
		sum();//执行sum函数
		printf("   \n");
		int b = 20;
		printf("b的值是%d\n",b);
	}					//局部变量b的生命周期为b所在的{}（5-8行）
	int a = 30;			//局部变量与全局变量变量名相同时，取局部变量
	int c = 40;			//局部变量c
	printf("a的值是%d\n",a);
//	printf("b的值是%d\n", b); //加上这行代码将会报错，因为局部变量b在此处生命周期已经结束
	printf("c的值是%d\n", c);
	return 0;
}