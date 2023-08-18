//#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//
///*
//C语言提供的关键字
//1.不能自己创建关键字
//2.变量名不能是关键字
//*/
//
////extern	是用来声明外部符号的
////register	寄存器关键字
////signed	有符号的 10-20
////unsigned	无符号的
////static	静态的！
////struct	结构体
////typedef	类型定义
////union		联合体（共用体）
////void		空-无
////volatile	易变的 - C语言暂时先不讲
//
////define 和 include都不是关键字，而是预处理指令
//
////int main() {
////	register int num = 100;//建议num的值放在寄存器中，是否放进去由编译器决定
////	/*计算机中数据可以存储到
////							寄存器		更小
////							高速缓存	几十MB
////							内存		8-16G
////							硬盘		500G-买的
////							网盘		送你2T-免费空间
////	*/
////	return 0;
////}
//
//
////详情版 常见关键字（typedef）
////typedef unsigned int u_int;
//////张三 - 小三
////int main() {
////
////	unsigned int num = 100;
////	u_int num = 100;//这两句是一模一样的意思
////
////	return 0;
////}
//
//
////详情版 常见关键字（static）
//
///*static - 静态的
//1.static修饰局部变量
//2.static修饰全局变量
//3.static修饰函数
//
//*/
//
////void test() {
////	//static修饰局部变量，改变了局部变量的生命周期（本质上改变了变量的存储类型）
////	static int a = 1;//创建完之后没有释放结果
////	a++;
////	printf("%d\n",a);
////}
////
////int main(){
////	int i = 0;
////	while (i<10)
////	{
////		test();
////		i++;
////	}
////
////	return 0;
////}
//
///*
//static让局部变量类型从 栈区 变成了 静态区
//
//栈区：局部变量函数的参数
//
//堆区：动态内存分配的地方
//
//静态区：全局变量 static修饰的静态变量
//
//*/
//
////static修饰全局变量/函数，使得这个全局变量/函数只能在自己所在的源文件（.c）内部可以使用，而其他源文件不能使用！
////全局变量/函数，在其他源文件内部可以被使用，因为全局变量/函数具有外部链接属性
////但是被static修饰之后，就变成了内部链接属性，其他源文件就不能连接到这个静态的全局变量了
//
////extern 声明外部符号的
//
////extern int g_val;
////
////int main() {
////
////	printf("%d\n", g_val);
////
////	return 0;
////}
//
////声明变量
//
//extern int Add(int x, int y);
//
//int main() {
//
//	int a = 10;
//	int b = 20;
//	int sum = Add(a,b);
//	printf("%d\n",sum);
//	return 0;
//}