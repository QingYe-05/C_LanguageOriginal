//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
///*
//算术操作符：+ - * /    += -= *= /=   (=是赋值操作符)
//移位操作符：<<  - 左移位   >>  - 右移位
//*/
////int main() {
////
////	int a1 = 9 / 2;
////	float a2 = 9 / 2;
////	float a3 = 9 / 2.0;
////	int a4 = 9 % 2;//取模操作符 - 得到的结果是余数
////
////	printf("%d\n", a1);
////	printf("%f\n", a2);
////	printf("%f\n", a3);
////	printf("%d\n", a4);
////
////	int a = 2;
////	int b = a << 1;//移动的是二进制位
////	printf("%d\n", b);
////	return 0;
////}
//
//
////int main() {
////
////	//sizeof是一个操作符
////	//不是函数
////	//计算类型或者变量的大小
////	int a = 10;
////
////	printf("%d\n", sizeof(int));
////	printf("%d\n", sizeof(a));
////	printf("%d\n", sizeof a);
////	return 0;
////}
//
////int main() {
////
////	int arr[10] = { 0 };
////	printf("%d\n",sizeof(arr));//计算的是数组总数的大小
////	printf("%d\n",sizeof(arr[0]));//4
////	int sz = sizeof(arr) / sizeof(arr[0]);//C语言是用sizeof来计算数组元素的个数
////	printf("%d\n",sz);
////	return 0;
////}
///*
//位操作符：
//&按位与
//|按位或
//^按位异或
//.结构体变量.成员变量
//->结构体指针->成员变量名
//单目操作符：！、-（负）、+（正）、&（取地址）、sizeof
//--
//++
//~ 对一个数的二进制位按位取反（包括符号位）
//(类型)强制类型转换
//
//双目操作符：eg：（a+b）此时的+就是双目操作符
//三目操作符： ? :
//
//*/
//
///*
//数据在内存中以 补码 的形式存储
//一个整数的二进制位表示有3种：
//原码
//反码
//补码
//		正整数：原码、反码、补码相同
//		负整数：反码=原码按位取反
//			  补码=原码按位取反+1（符号位不变）
//
//			  原码-->补码 除符号位按位取反，末位+1
//			  补码-->原码 末位-1，除符号位按位取反
//-1：
//10000000000000000000000000000001（原码）
//11111111111111111111111111111110（反码）
//11111111111111111111111111111111（补码）
//*/
////int main() {
////	//0的二进制位  
////	//00000000000000000000000000000000   0的原码
////	//11111111111111111111111111111111   ~0
////	//
////	int a = 0;
////
////	printf("%d\n",~a);
////
////	//~ 按位取反  1变成0，0变成1
////	return 0;
////}
//
////int main() {
////
////	int a = 10;
////	//int b = ++a;//前置 ++  -先++，后使用（不用过分重视）
////	//printf("%d\n",b);//11
////	//printf("%d\n",a);//11
////	int b = a++;//后置 ++  -先使用，后++
////	printf("%d\n", b);//10
////	printf("%d\n", a);//11
////	return 0;
////}
//
////int main() {
////	//强制类型转换
////	int a = (int)3.14;
////	printf("%d\n",a);
////	return 0;
////}
//
////关系操作符
////　＞ ＜　＝＝　!=　＞＝　　＜＝
//
////逻辑操作符
////&&  - both 
////||  - either
////int main() {
////
////	int a = 3;
////	int b = 0;
////
////	int c = a && b;
////	int d = a || b;
////
////	printf("%d\n",c);
////	printf("%d\n",d);
////
////	return 0;
////}
//
//
////条件操作符( ? : )
///*
//exp1 ? exp2 : exp3
//exp1成立-->整个表达式的结果是exp2
//exp1不成立-->整个表达式的结果是exp3
//*/
//
////int main() {
////
////	int a = 0;
////	int b = 3;
////	int max = 0;
////	//if (a>=b)
////	//{
////	//	max = a;
////	//}
////	//else {
////	//	max = b;
////	//}
////	// printf("%d\n", max);
////	//转换为三目操作符
////	max = (a > b) ? a : b;
////	printf("%d\n", max);
////	return 0;
////}
//
////逗号表达式（一串，隔开的表达式）
////int main() {
////	int a = 0;
////	int b = 3;
////	int c = 5;
////	//逗号表达式，从左向右一次计算
////	//整个表达式的结果是最后一个表达式结果
////	int d = (a = b + 2, c = a - 4, b = c + 2);
////	printf("%d\n",d);//3
////
////	return 0;
////}
//
////int main() {
////	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
////	printf("%d\n",arr[1]);//2,此时的[]是引用下标
////
////	return 0;
////}
//
////函数调用操作符 ()
////int main() {
////	//调用函数的时候，函数后面的()就是函数调用操作符，可传多个参数，也可以是null
////	printf("%d",1000);//此时printf()可看作一个函数
////	return 0;
////}
