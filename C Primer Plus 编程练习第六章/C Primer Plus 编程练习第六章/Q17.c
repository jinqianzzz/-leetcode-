/*Q17--����ȡ�������ڽ����ʱ��*/
#include <stdio.h>
#define annual_interest_rate 0.08
int main(void)
{
	double rest = 100;
	int i = 0;

 do
    {
    i++;
    rest += rest * annual_interest_rate;
    rest -= 10;
    } while (rest > 9);
   // ��������9�򲻹���һ��֧ȡ;
	printf("%d���ȡ��Ǯ\n",++i);//ע��˴�iҪ+1
	return 0;
}


