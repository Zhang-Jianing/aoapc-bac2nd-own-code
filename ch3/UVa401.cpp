//UVa401 Palindromes
//张家宁
//CHN,3705022005****3216
 
#include<cstdio>
#include<cstring>
#include<cctype>//isalpha() 

const char* rev = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";//字母与数字的镜像字符 
const char* msg[] = {"not a palindrome", "a regular palindrome", "a mirrored string", "a mirrored palindrome"};

//返回ch的镜像字符 
char r(char ch) 
{
	if(isalpha(ch)) //isalpha用来判断字符是否为字母 
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
			if(s[i] != s[len-1-i]) //重点，very important:: s[len-1-i]的含义;the meaning of s[len-1-i] 
				p = 0; // 不是回文串
			if(r(s[i]) != s[len-1-i]) 
				m = 0; // 不是镜像串
    	}
    	printf("%s -- is %s.\n\n", s, msg[m*2+p]);
	}
	return 0;
}

//Accepted 100 https://www.luogu.com.cn/record/30830994 
