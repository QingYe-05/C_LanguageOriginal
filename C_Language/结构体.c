#define _CRT_SECURE_NO_WARNINGS
//�ṹ�������C���Դ����µ�����
#include<stdio.h>

//����һ��ѧ��������
struct Stu
{
	char name[20];//��Ա����
	int age;
	double score;
};
//����һ���������
struct Book
{
	char name[20];
	float price;
	char id[30];
};



int main() {

	struct Stu s = { "����",20,80.5 };//�ṹ��Ĵ����ͳ�ʼ��
	printf("1��%s %d %lf\n",s.name,s.age,s.score);//�ṹ�����.��Ա����
	struct Stu* ps = &s;
	printf("2��%s %d %lf\n",(*ps).name,(*ps).age,(*ps).score);//������
	//˫���ȸ����� - %lf
	printf("3��%s %d %lf\n", ps->name, ps->age, ps->score);//��ͷ->������
	return 0;
}
