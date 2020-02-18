//习题2-3 倒三角形
//exercise2-3 triangle
//张家宁
//CHN,3705022005****3216 

#include<cstdio>

int main()
{
	int n;
	scanf("%d",&n);
	int now=1,kongge=0;
	for (int i=2;i<=n;i++)
		now+=2;//计算最上层的符号数
	for (int i=1;i<=n;i++) 
	{
		for (int j=0;j<kongge;j++)//切记j<kongge，没有等于号 
			printf(" ");
		kongge++;
		for (int j=1;j<=now;j++)
			printf("#");
		now-=2;
		printf("\n");
	}
	return 0;
}
