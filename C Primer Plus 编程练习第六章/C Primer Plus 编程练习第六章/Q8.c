/*Q8--����֮����������˻�*/
#include <stdio.h>
int main(void)
{
	float a = 0;
	float b = 0;
	int ch=1;
	int i, j;

	printf("���������ڼ�������֮����������˻��Ľ��\n");
	printf("����������������");
	scanf("%f", &a);
	scanf("%f", &b);
	while(ch)
	{
		printf("����Ϊ%f\n", (a - b) / (a * b));
		printf("��������븡����������q�˳���\n");
		i=scanf("%f", &a);
		j=scanf("%f", &b);
		ch = i || j;
	}	
	return 0;
}

//���
//int main(void)
//{
//	float x, y;
//	printf("Please enter the two float data(separated by blank):");
//	while (scanf("%f %f", &x, &y) == 2)
//	{
//		printf("The answer is %f\n", (x - y) / (x * y));
//		printf("Please enter the two float data(separated by blank):");
//	}
//	printf("Program end!");
//	return 0;
//}
