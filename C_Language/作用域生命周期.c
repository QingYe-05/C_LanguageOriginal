//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main() {//%zu打印一个sizeof返回的无符号整型 z-size的返回值 u-unsigned
//	printf("%zu\n", sizeof(char));//1 字符型
//	printf("%zu\n", sizeof(short));//2 短整型
//	printf("%zu\n", sizeof(int));//4 整型
//	printf("%zu\n", sizeof(long));//4 长整型
//	printf("%zu\n", sizeof(long long));//8 更长的整型
//	printf("%zu\n", sizeof(float));//4 单精度浮点数
//	printf("%zu\n", sizeof(double));//8 双精度浮点数
//	return 0;
//
//}
/*
bit - 比特位
byte- 字节 1byte=8bit
kb=1024byte
gb同上
tb
pb
*/

/*
进制表示
b - 二进制
o - 八进制
d - 十进制
x - 十六进制
*/


//#include<stdio.h>
//int main() {
//	int age = 20;
//	double num = 12.6;
//	printf("%d,%f", age, num);
//
//	return 0;
//}

//变量和常量的概念
//变量分为：
//全局变量 - {}外部定义的变量
//局部变量 - {}内部定义的变量
// 
//int a = 1;
//#include<stdio.h>
//
//int b = 0;
//int main() {
//	short age = 20;
//	int high = 180;
//	double weight = 120;
//	return 0;
//}

//int a = 100;
//
//#include<stdio.h>
//int main() {
//
//	int a = 10;//当全局变量和局部变量名字相同的情况下，局部优先
//
//	return 0;
//}


//变量作用域
//局部：变量所在的局部范围
//全局：一个工程的任意地方都可以使用


//变量生命周期
//局部变量生命周期：进作用域生命周期开始，出作用域结束
//程序的生命周期跟主函数有关，程序运行开始，程序结束就结束


//#include<stdio.h>

//声明来自外部的符号
//extern int a;
//
////int a = 0;//全局
//void test() {
//	printf("test-->%d\n", a);
//}
//
//int main() {
//	test();
//	{
//		//int a = 10;//局部
//		printf("a=%d\n",a);
//	}
//	printf("a=%d\n", a);
//	return 0;
//}