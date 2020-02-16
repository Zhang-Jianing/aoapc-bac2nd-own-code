#include<cstdio>
int main()
{
	for (int i=10;i<=100;i++)
	{
		bool flag=true;
		for (int j=2;j<i;j++)
			for (int k=2;k<i;k++)
				if (j*k==i)
					flag=false;
		if (flag==true)
			printf("%d\n",i);
	}
	return 0;
}
