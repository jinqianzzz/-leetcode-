/*Q6--ͳ������������ei���ֵĴ���*/
#include <stdio.h>
int main(void)
{
	int i = 0;
	int j = 0;
	char ch;

	while ((ch = getchar()) != '#')
	{
		if (ch == 'e')
		{
			i++;
		}
		else if (i == 1)
		{
			if (ch == 'i')
			{
				j++;
			}
			i = 0;
		}
	}
	printf("ei����%d��\n", j);
	return 0;
}

