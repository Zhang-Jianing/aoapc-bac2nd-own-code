//UVa1585 Score
//ACM/ICPC Seoul 2007
//уе╪рдЧ

#include<cstdio>
#include<cstring>

const int maxn=85;
char s[maxn];

int main()
{
	int n;
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		scanf("%s",s);
		int sum=0,cnt=0;
		for (int i=0;i<strlen(s);i++)
		{
			if (s[i]=='O')
			{
				cnt++;
				sum+=cnt; 
			}
			else
				cnt=0;
		}
		printf("%d\n",sum);
	}
	return 0;
} 
