/*Q1--�۲����������*/
#include <stdio.h>
#include <limits.h>
#include <float.h>
int main(void)
{
	float a = 10.0/3;
	printf("������������ʧ���ȴ�ӡΪ%f\n", a);
	printf("��󸡵���Ϊ%f\n", FLT_MAX);
	printf("�����������ӡ��%f\n", FLT_MAX * 10);
	printf("�������Ϊ%d\n", INT_MAX);
	printf("���������ӡ��%d\n", INT_MAX + 1);
	return 0;
}