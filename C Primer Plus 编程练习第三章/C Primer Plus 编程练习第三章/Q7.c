/*Q7--�������Ӣ��ת��Ϊ����*/
#include <stdio.h>
#define PER_FOOT 2.54
int main(void)
{
	float height;
	printf("��������ߣ�Ӣ�ߣ���");
	scanf("%f", &height);
	printf("��������������ʾΪ%f", height*PER_FOOT);
	return 0;
}