/*Q10--������������˰�ռƻ��¹��ʵĶ�Ӧ˰��*/
#include <stdio.h>
#include <stdio.h>
#define tax_fir 0.15
#define tax_sec 0.28
#define degree_fir 17850
#define degree_sec 23900
#define degree_thi 29750
#define degree_fou 14875
int main(void)
{
	double wages = 0;
	double tax = 0;
	double tax_num = 0;
	int degree = 0;

	while (1)
	{
	    printf("*****************************************************************\n");
		printf("�����ǽ���˰�������:\n");
		printf("1) ����                               2) ����\n");
		printf("3) �ѻ飬����                      4) �ѻ飬����\n");
		printf("5) quit\n");
		printf("*****************************************************************\n");
		printf("���������������\n");
		scanf("%d", &degree);
		switch (degree)
		{
		case 1:tax = degree_fir;
			break;
		case 2:tax = degree_sec;
			break;
		case 3:tax = degree_thi;
			break;
		case 4:tax = degree_fou;
			break;
		case 5:return 0;
		default:
		{
			printf("��������ȷ��ѡ��\n");
			continue;
		}
		}
		printf("�����빤��(��Ԫ):\n");
		scanf("%lf", &wages);
		tax_num = tax * tax_fir + (wages - tax) * tax_sec;
		printf("Ӧ����˰�ѣ�%lf\n", tax_num);
	}
}