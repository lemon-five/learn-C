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
	const	int num2 = 0;				//const-常属性，	此时变量num为const修饰的常变量。
	num1 = 8;
	//	num2 = 8;							//加上这句话会报错
	printf("num1的值是%d\n", num1);
	printf("num2的值是%d\n", num2);
	return 0;
}
int test2() {							//对常变量进行测试
	const C = 5;
	int arc[5];							//定义一个长度为5的数组,5是字面常量
	int ard[six];						//此处six为#defend定义的标识常量可以使用作为6
//	int ard[n] ;						//加上这句话会报错，因为n为常变量，并非常量，无法代替5使用
	return 0;
}
int test3() {							//枚举常量		可一一列举的有限个常量
	enum SEX {							
		boy,
		girl
	};
	enum SEX xiaoming = boy;			//给予变量小明性别为男
	return 0;
}