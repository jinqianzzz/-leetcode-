/*Q8--�±껻��*/
#include <stdio.h>
void Temperatures(double x)
{
	const double s1 = 5.0;
	const double s2 = 9.0;
	const double s3 = 32.0;
	const double k = 273.16;
	double st = 0;
	double kt = 0;
	st = s1 * (x - s3) / s2;
	kt = st + k;
	printf("�����¶�Ϊ%.2lf\n",x);
	printf("�����¶�Ϊ%.2lf\n", st);
	printf("�����¶�Ϊ%.2lf\n", kt);
}
int main(void)
{
	double tem = 0;
	
	printf("������һ�������¶�(����q�˳�)\n");
	while(1== scanf("%lf", &tem))
	Temperatures(tem);
	return 0;
}