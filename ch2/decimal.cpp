//习题2-5 分数化小数
//exercise2-5 decimal
//张家宁
//CHN,3705022005****3216

/*
//Wrong Answer,c不能太大 
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

        n = a/b;    //a除以b的整数
        printf("Case %d: %d.", ++kase, n);

        m =a % b;   //取a除以b的余数

        while(i++<c) { //用余数分别乘10，取出C位数的小数 
            m *= 10;
            printf("%d",m/b);
            m %= b; //用乘以10的余数再除以b取余数 
        }
        //将第c+1数乘十变成个位数，判断是否大于5，大于五就进一位
        m *=10; //第C位数
        printf("%d\n",((m%b)*10/b>5)? (m/b+1):(m/b));

    }
    return 0;
}
