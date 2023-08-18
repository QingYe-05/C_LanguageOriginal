////#define _CRT_SECURE_NO_WARNINGS
////1.字面变量
////2.const修饰的常变量 --> 常量前面加const之后就不能直接修改了const int a本质是变量，但不能直接修改，有常量的属性
////3.define定义标识符常量
////4.枚举常量
//
////#include<stdio.h>
////int main() {
////	const int a = 1;//如果加了const，下面代码直接报错
////	a = 2;
////	printf("%d\n",a);
////
////	//如何证明const修饰的n是变量
////	const int n = 10;
////	int arr[n] = { 0 };//数组里面需要的是一个常量，报错说明const修饰的是一个常变量
////
////
////
////	return 0;
////}
//
///*1.define定义 常量 */
////#define MAX 100
////#define STR "abcde"
////int main() {
////
////	printf("%d\n",MAX);
////	int a = MAX;
////	printf("%d\n", a);
////	printf("%s\n", STR);
////	return 0;
////}
//
////枚举常量
////enum Color
////{	//三原色
////	RED,
////	GREEN,
////	BLUE
////};
////enum Sex
////{	//性别
////	MALE,
////	FEMALE,
////	SECRET
////};
////
////int main() {
////	//三原色
////	// Red Blue Green
////	int num = 10;
////	enum Color c = RED;
////	RED = 20;//err
////	MALE = 10//err
////
////	return 0;
////}
//
////int main() {
////
////	char ch = 'w';
////	"abcde";//C语言中没有字符串类型，用双引号引起来的一串字符就是字符串
////	char arr1[10] = "abcdef";//6,最后有一个'\0'结束标识
////	char arr2[] = { 'a','b','c','d','e','f','\0' };//6
////
////	int len1 = strlen(arr1);
////	int len2 = strlen(arr2);
////
////	printf("%s\n", arr1);
////	printf("%s\n", arr2);
////
////	printf("%d\n", len1);
////	printf("%d\n", len2);
////	//根据字符串的长度自动创建空间
////	return 0;
////}
//
//
////转义字符
////
////%d - 打印整型
////%c - 打印字符
////%s - 打印字符串
////%f - 打印float类型数据
////%lf - 打印double类型数据
////%zu - 打印sizeof的返回值
//
////int main() {
////	printf("(are you ok??)");
////	printf("%s\n","abcdef");
////	printf("%c\n",'\'');//输出'
////	printf("abcd\\0efg\n");//输出abcd\0efg
////	printf("c:\test\test.c\n");
////	printf("c:\\test\\test.c\n");
////	printf("\a\a\a\a\a\a");//蜂鸣
////	printf("%d\n", strlen("c:\test\628\test.c"));//14
////	return 0;
////}
//
//
//// \ddd表示1-3个八进制数
//// \xdd表示2个十六进制数字
////int main() {
////
////	printf("%c\n",'\101');//默认是8进制  A - 65
////	printf("%c\n", '\130');//X - 88
////	printf("%c\n", '\x30');//0 - 48
////	return 0;
////}
//
////注释 - 用来解释复杂代码
///*-- C语言的注释风格，缺点：不能嵌套注释*/
////C++的注释风格，后被引用到C语言中
//
//
//
///*2.define定义 宏 */
//#include<stdio.h>
//#define ADD(X,Y) ((X)+(Y))
//
//int main() {
//	//#define ADD(X,Y) X+Y  对应的结果
//	printf("%d\n",4*ADD(2,3));//11 4*2+3
//	printf("%d\n",ADD(2,3)*4);//14 2+3*4
//	//因此需要在定义宏的时候加上括号#define ADD(X,Y) ((X)+(Y))对应的结果为20
//
//	return 0;
//}
