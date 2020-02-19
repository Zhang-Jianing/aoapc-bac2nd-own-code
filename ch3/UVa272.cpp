//UVa272 TeX Quotes
//ÕÅ¼ÒÄþ 
//CHN,3705022005****3216

#include<cstdio>

int main()
{
	char c;
	bool flag=true;
	while ((c=getchar())!=EOF)
	{
		if (c=='"')
		{
			printf("%s",flag==true?"``":"''");
			flag=!flag;
		}
		else
			printf("%c",c);
	}
	return 0;
}

//Accepted 100 https://www.luogu.com.cn/record/30809717 
