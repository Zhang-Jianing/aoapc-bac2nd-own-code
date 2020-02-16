//��������Snake_is_Counting
//�ż���
//CHN,305022005****3216

#include<stdio.h>
#include<string.h>
#define MAXN 20
int num[MAXN][MAXN];
int main()
{
	int n,x,y,d=1;
	scanf("%d",&n);	
	num[x=0][y=n-1]=1;
	while (d<n*n)
	{
		//������ 
		while (x+1<n && !num[x+1][y])
			num[++x][y]=++d;
		//������
		while (y-1>=0 && !num[x][y-1])
			num[x][--y]=++d;
		//������
		while (x-1>=0 && !num[x-1][y])
			num[--x][y]=++d;
		//������
		while (y+1<n && !num[x][y+1])
			num[x][++y]=++d; 
	}
	for (x=0;x<n;x++)
	{
		for (y=0;y<n;y++)
			printf("%3d",num[x][y]);
		printf("\n");
	}
	return 0;
} 
