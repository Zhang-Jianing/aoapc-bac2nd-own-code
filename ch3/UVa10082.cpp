//UVa10082 WERTYU
//�ż���
//CHN,3705022005****3216

#include<cstdio>
#include<cstring>

char key[]={"`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./"};
//���ֻдһ��\�������ᾯ�棬���ÿ� 

int main()
{
	char c;
	while ((c=getchar())!=EOF)
	{
		bool flag=false;
		for (int i=0;i<strlen(key);i++)
			if (c==key[i])
			{
				printf("%c",key[i-1]);
				flag=true;
				break;
			}
		if (!flag)
			printf("%c",c);
	}
	return 0;
} 
//Accepted 100 https://www.luogu.com.cn/record/30810228 
