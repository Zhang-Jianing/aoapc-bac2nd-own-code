//exercise 2-1 daffodil
//ϰ��2-1 ˮ�ɻ���
//�ż���
//CHN,3705022005****3216

#include <cstdio>

int main()
{
	for (int i = 100; i <= 999; i ++)
	{
		int a, b, c;
		a = i % 10;
		b = i / 10 % 10;
		c = i / 100;
		if (a*a*a + b*b*b + c*c*c == i)
			printf("%d\n", i);
	} 
	return 0;
} 
