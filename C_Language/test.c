//#define _CRT_SECURE_NO_WARNINGS
/*
在VS的安装路径下有一个文件：
newc++file.cpp的文件
在VS工程中创建型的.c或者.cpp文件的时候，都是拷贝newc++file.cpp这个文件的！*/

/*
VS2022 中的快捷键

1、F4，显示属性窗口。
2、F12，转到定义。
3、Shift+ Tab，取消制表符。
4、F5，运行调试； Ctrl + F5，运行不调试；Shift+F5，结束调试。
5、Ctrl + K + C，注释选中内容；Ctrl+K+U，取消注释内容。
6、Ctrl + W + X，打开工具箱。
7、Ctrl + E + W，自动换行。
8、Ctrl + M + M，隐藏或展开当前嵌套的折叠状态。
9、Ctrl + L / Delete，删除一行内容。
10、Ctrl + J 智能提示补全代 码
11、Ctrl + D 复制本行到下一行
12、Ctrl + K,D 格式化文档代码
13、Ctrl + E + D，排版整个文档格式。
14、F11,逐语句调试；F10，逐过程调试；F9，启用/停止断点；ctrl+shift+F9，删除全部断点。
15、Ctrl + E + S，查看空白。
16、Ctrl + Alt + L ，打开解决方案资源管理器。
17、F1，显示MSDN帮助。
18、Shift + Alt + F10，导入命名空间。
19、Ctrl + F4，关闭当前标签窗口。
20、Ctrl + Shift + 空格键，查看参数信息。
21、Shift + Alt + C，添加类。
22、Ctrl + R + E，声明属性后，快捷键生成属性的get和set方法。
23、光标快速切换到下一行：Ctrl + Shift + Enter；
24、光标快速切换到上一行：Ctrl + Enter。
21、自定义快捷键：工具–选项–环境–键盘–显示命令包含（查询要定义的项）–按快捷键（输入要设置的快捷键）–分配–确定。


小技巧
1、输入mbox，按两次tab显示MessageBox.Show();
2、输入cw，按两次tab显示Console.WriteLine();
3、输入prop，按两次tab显示public int MyProperty { get; set; }
4、VS启动，在运行中输入devenv。
5、双击控件工具，自动添加控件。
6、alt + 方向键，可调整控件(改行)位置。
7、移除不需要的命名空间，右键–组织using–移除和排序， 即可移除不需要的命名空间，并按英文字母正序排列各命名空间。
8、显示代码对应的行数，方便程序调试。工具—选项—文本编辑器—C#（C/C++)—常规—行号。
9、 ctrl + 滑轮   上下移动
10、shift + 滑轮  左右移动
11、ctrl + alt 鼠标左键点击上下移，同时选择多行的
12、ctrl + F5 编译运行
13、ctrl + K,U快速取消注释 （ctrl+shift+/）
14、ctrl + K,C快速注释 （ctrl+shift+/）



*/




//C语言代码中一定要有主函数

//main函数是程序的入口，只能有一个
 
//标准的主函数的写法,不要用void(是古老的写法)


//std - 标准
//i - input
//o - output


//#include<stdio.h>
//int main() {
//

//
//	printf("hh");//printf是一个库函数，专门用来打印数据
//	return 0;
//}

//不要将全局变量和局部变量设置成一样

//计算两个整数的和
//#include<stdio.h>
//int main() {
//	int num1 = 0;
//	int num2 = 0;//初始化
//
//	//输入两个整数的和
//	scanf_s("%d %d", &num1, &num2);//可以用#define _CRT_SECURE_NO_WARNINGS来屏蔽这个错误
//
//	//求和
//	int sum = num1 + num2;
//	//输出
//	printf("%d", sum);
//	return 0;
//}

//变量的作用域