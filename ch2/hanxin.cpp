//exercise 2-2 hanxin
//习题2-2 韩信点兵 
//张家宁
//CHN,3705022005****3216

#include<cstdio>
int main()
{
	int a, b, c, kase = 0;
	while (scanf("%d",&a) == 1)
	{
		bool flag = false;
		scanf("%d%d", &b, &c);
		for (int i = 1; i <= 100; i++)
			if ((i-a)%3==0 && (i-b)%5==0 && (i-c)%7==0)
			{
				flag = !flag;
				printf("Case %d: %d\n", ++kase, i);
			}
		if (flag == false)
			printf("Case %d: No answer\n", ++kase); 
	}
	return 0;
}
