/*Q4--��ȡ����������ӡΪ��ͬ��ʽ*/
#include <stdio.h>
int main(void)
{
	float a;

	printf("Enter a floating-point value:");
	scanf("%f", &a);
	printf("fixed-point notation:%f\n", a);
	printf("exponential notation:%e\n", a);
	printf("p natation:%a", a);
	return 0;
}