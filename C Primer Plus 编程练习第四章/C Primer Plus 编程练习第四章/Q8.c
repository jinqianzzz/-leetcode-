
/*ŷ����������ȼ�����ı�ʾ��*/
#include <stdio.h>
#define PER_GAL 3.785
#define PER_MILE 1.609
int main(void)
{
	float distance;
	float consumption;

	printf("���������е��ó�(Ӣ��)\n");
	scanf("%f", &distance);
	printf("���������ĵ�������(����)\n");
	scanf("%f", &consumption);
	printf("ÿ������ʻ��Ӣ����Ϊ%.1f\n", distance / consumption);
	printf("����Ϊ%.1f��/100����\n", (consumption * PER_GAL * 100) / (distance * PER_MILE) );
	return 0;
}