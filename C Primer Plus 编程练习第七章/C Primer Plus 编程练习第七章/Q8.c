/*Q8--��Q7�Ļ������ṩһ���ɹ�ѡ��Ĺ��ʵȼ��嵥*/
#include <stdio.h>
#define tax_fir 0.15
#define tax_sec 0.2
#define tax_thi 0.25
int main(void)
{
	double tax_fir_max = 300 * tax_fir;
	double tax_sec_max = tax_fir_max + 150 * tax_sec;
	double hour = 0;
	double wages = 0;
	double tax = 0;
	double wage_per_hour = 0;
	int degree = 0;

	while (1)
	{
	    printf("*****************************************************************\n");
		printf("Enter the number corresponding to the desired pay rate or action:\n");
		printf("1) $8.75/hr                       2) $9.33/hr\n");
		printf("3) $10.00/hr                      4) $11.20/hr\n");
		printf("5) quit\n");
		printf("*****************************************************************\n");
		printf("�����빤�ʵȼ�\n");
		scanf("%d", &degree);
		switch (degree)
		{
		case 1:wage_per_hour = 8.75;
			break;
		case 2:wage_per_hour = 9.33;
			break;
		case 3:wage_per_hour = 10.00;
			break;
		case 4:wage_per_hour = 11.20;
			break;
		case 5:return 0;
		default:
		{
			printf("��������ȷ��ѡ��\n");
			continue;
		}
		}
		printf("�����빤����ʱ��(h):\n");
		scanf("%lf", &hour);
		if (hour <= 40)
			wages = hour * wage_per_hour;
		else
			wages = (40 + (hour - 40) * 1.5) * wage_per_hour;
		if (wages <= 300)
			tax = wages * tax_fir;
		else if (wages > 300 && wages <= 450)
			tax = tax_fir_max + (wages - 300) * tax_sec;
		else
			tax = tax_sec_max + (wages - 450) * tax_thi;
		printf("�����ܶ%lf\n˰��%lf\n�����룺%lf\n", wages, tax, wages - tax);
	}
}