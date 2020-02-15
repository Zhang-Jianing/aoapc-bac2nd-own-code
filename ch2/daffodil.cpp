//exercise 2-1 daffodil
//习题2-1 水仙花数
//张家宁
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
