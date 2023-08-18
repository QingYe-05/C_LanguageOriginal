#define _CRT_SECURE_NO_WARNINGS
//结构体可以让C语言创建新的类型
#include<stdio.h>

//创建一个学生的类型
struct Stu
{
	char name[20];//成员变量
	int age;
	double score;
};
//创建一个书的类型
struct Book
{
	char name[20];
	float price;
	char id[30];
};



int main() {

	struct Stu s = { "张三",20,80.5 };//结构体的创建和初始化
	printf("1：%s %d %lf\n",s.name,s.age,s.score);//结构体变量.成员变量
	struct Stu* ps = &s;
	printf("2：%s %d %lf\n",(*ps).name,(*ps).age,(*ps).score);//解引用
	//双精度浮点型 - %lf
	printf("3：%s %d %lf\n", ps->name, ps->age, ps->score);//箭头->操作符
	return 0;
}
