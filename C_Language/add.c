//#define _CRT_SECURE_NO_WARNINGS


//全局变量
//int g_val = 2023;
//extern int g_val = 2023;

//static修饰全局变量/函数，使得这个全局变量/函数只能在自己所在的源文件（.c）内部可以使用，而其他源文件不能使用！
//全局变量/函数，在其他源文件内部可以被使用，因为全局变量/函数具有外部链接属性
//但是被static修饰之后，就变成了内部链接属性，其他源文件就不能连接到这个静态的全局变量了


//int Add(int x,int y) {
//
//	return x + y;
//}