//ϰ��2-6 ����
//exercise2-6 permutation
//�ż���
//CHN,3705022005****3216 

//��� https://www.luogu.com.cn/blog/ZhangJianing/aoapc2nd-e2-6 

#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[])
{
    int abc, def, ghi;
    for (abc = 123; abc<=329; ++abc)
    {
        bool visit[10] = {false}; //ͳ��0~9�Ƿ����
        //���abc��λ
        visit[abc/100] = visit[abc/10%10] = visit[abc%10] = true;
        //���def��λ
        def = 2*abc;
        visit[def/100] = visit[def/10%10] = visit[def%10] = true;
        //���ghi��λ
        ghi = 3*abc;
        visit[ghi/100] = visit[ghi/10%10] = visit[ghi%10] = true;
        //�����ȫ��
        bool flag = true;
        for (int i = 1; i<=9; ++i)
            if (visit[i] != true)
            {
                flag = false;
                break;
            }
        if (flag)
            cout << abc << ' ' << def << ' ' << ghi << endl;
    }
    return 0;
}
