//UVa401 Palindromes
//�ż���
//CHN,3705022005****3216
 
#include<cstdio>
#include<cstring>
#include<cctype>//isalpha() 

const char* rev = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";//��ĸ�����ֵľ����ַ� 
const char* msg[] = {"not a palindrome", "a regular palindrome", "a mirrored string", "a mirrored palindrome"};

//����ch�ľ����ַ� 
char r(char ch) 
{
	if(isalpha(ch)) //isalpha�����ж��ַ��Ƿ�Ϊ��ĸ 
		return rev[ch - 'A'];
	return rev[ch - '0' + 25];
}

int main() 
{
	char s[30];
	while(scanf("%s", s) == 1) 
	{
    	int len = strlen(s);
    	int p = 1, m = 1;
    	for(int i = 0; i < (len+1)/2; i++) 
		{
			if(s[i] != s[len-1-i]) //�ص㣬very important:: s[len-1-i]�ĺ���;the meaning of s[len-1-i] 
				p = 0; // ���ǻ��Ĵ�
			if(r(s[i]) != s[len-1-i]) 
				m = 0; // ���Ǿ���
    	}
    	printf("%s -- is %s.\n\n", s, msg[m*2+p]);
	}
	return 0;
}

//Accepted 100 https://www.luogu.com.cn/record/30830994 
