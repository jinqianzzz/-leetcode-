/*Q7--��ƺ���������*/
#include <stdio.h>
void Cube(double x)
{
	double cube = x * x * x;
	printf("%lf", cube);
}
int main(void)
{
	double a = 0;
	printf("������һ����\n");
	scanf("%lf", &a);
	Cube(a);
	return 0;
}