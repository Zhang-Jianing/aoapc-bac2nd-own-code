//ϰ��2-3 ��������
//exercise2-3 triangle
//�ż���
//CHN,3705022005****3216 

#include<cstdio>

int main()
{
	int n;
	scanf("%d",&n);
	int now=1,kongge=0;
	for (int i=2;i<=n;i++)
		now+=2;//�������ϲ�ķ�����
	for (int i=1;i<=n;i++) 
	{
		for (int j=0;j<kongge;j++)//�м�j<kongge��û�е��ں� 
			printf(" ");
		kongge++;
		for (int j=1;j<=now;j++)
			printf("#");
		now-=2;
		printf("\n");
	}
	return 0;
}
