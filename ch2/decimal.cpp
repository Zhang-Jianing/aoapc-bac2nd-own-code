//ϰ��2-5 ������С��
//exercise2-5 decimal
//�ż���
//CHN,3705022005****3216

/*
//Wrong Answer,c����̫�� 
#include<cstdio>
int main()
{
    int a,b,c,kase=0;
    for (;;)
    {
        scanf("%d%d%d",&a,&b,&c);
        if (a==0||b==0||c==0)
            break;
        printf("Case %d: %.*f\n",++kase,c,(double)a/b);
    }
    return 0;
}
*/

#include<cstdio>
int main(){
    int a,b,c,res;
    int kase=0,n,i=1,m;
    while(scanf("%d%d%d",&a,&b,&c)==3 &&a &&b &&c){
        if(a>1000000 && b>100000 && c>100){
            break;
        }

        n = a/b;    //a����b������
        printf("Case %d: %d.", ++kase, n);

        m =a % b;   //ȡa����b������

        while(i++<c) { //�������ֱ��10��ȡ��Cλ����С�� 
            m *= 10;
            printf("%d",m/b);
            m %= b; //�ó���10�������ٳ���bȡ���� 
        }
        //����c+1����ʮ��ɸ�λ�����ж��Ƿ����5��������ͽ�һλ
        m *=10; //��Cλ��
        printf("%d\n",((m%b)*10/b>5)? (m/b+1):(m/b));

    }
    return 0;
}
