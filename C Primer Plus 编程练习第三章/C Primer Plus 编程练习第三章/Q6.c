/*Q6--��ˮ�Ŀ�����ת��Ϊˮ���ӵ�����*/
#include <stdio.h>
#define PER_QUA_WATER 950
#define PER_HYD_QUA 3e-23
int main(void)
{
	float quart;
	printf("������ˮ�Ŀ�������");
	scanf("%f", &quart);
	printf("���Ӧ��ˮ������Ϊ%e", quart * PER_QUA_WATER/PER_HYD_QUA);
	return 0;
}