//ϰ��2-2 �����еĺ� 
//exercise2-2 subsequence
//�ż���
//CHN,3705022005****3216 

//���	https://www.luogu.com.cn/blog/ZhangJianing/aoapc2nd-e2-2 

/*
//WA
#include<cstdio>
int main()
{
	int n,m,kase=0;
	while (scanf("%d%d",&n,&m)==2 && n!=0 && m!=0)
	{
		double sum=0.000;
		for (int i=n;i<=m;i++)
		{
			int a=i*i;
			long double b=1.0/a;
			sum+=b;
		}
		printf("Case %d: %.5llf\n",++kase,sum);
	}
	return 0;
} 
*/

#include<cstdio>
int main()
{
    int m,n,i,j=1;
           
    while(scanf("%d%d",&m,&n) != EOF)
    {
        double sum = 0; 
        if(m==0 && n==0)
             return 0;
        else
        {
            for(i=m; i<=n; i++)
            {
                sum += ((1.0/i)*(1.0/i));  //��ʽ����ѷ��ӻ��ĸд�ɸ����ͣ������Զ�ת����С���� 
            }
            printf("Case %d: %.5f\n",j,sum);
            j++;
        }
    }
    return 0;
}

