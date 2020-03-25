#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<windows.h>
#include<stdlib.h>
#define RED    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED)
#define BLUE   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE)
#define GREEN  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN)
#define WHITE  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_BLUE|FOREGROUND_GREEN)
#define CYAN   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_GREEN)
#define PURPLE SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_BLUE)
#define YELLOW SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN)
#define B_WHITE SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_INTENSITY|BACKGROUND_RED)
using namespace std;
int main()
{
	while(1)
	{
		WHITE;
		char s[100];
		gets(s);
		char buf[50];
		long long a(1),b(1),i;
		sscanf(s,"%[0-9]",buf);
		a = atoi(buf);
		int leng = strlen(buf);
		char ch;
		for(i=leng;; i++)
		{
			if(s[i]!=' ')
			{
				ch = s[i];
				break;
			}
		}
		char buff[50] = "";
		int cnt = 0;
		for(int j=i+1; j<strlen(s); j++)
		{
			if(s[j]!=' ') buff[cnt++] = s[j];
		}
		if(strcmp(buff,"")!=0)
			b = atoi(buff);
		PURPLE;
		if(ch=='+') cout<<a<<" + "<<b<<" = "<<a+b<<endl;
		if(ch=='-') cout<<a<<" - "<<b<<" = "<<a-b<<endl;
		if(ch=='*') cout<<a<<" * "<<b<<" = "<<(long long)a*b<<endl;
		if(ch=='/') cout<<a<<" / "<<b<<" = "<<(double)a/b<<"("<<a/b<<")\n";
		if(ch=='^') cout<<a<<"^"<<b<<" = "<<pow(a,b)<<endl;
		if(ch=='%') cout<<a<<" % "<<b<<" = "<<a % b<<endl;
		if(strcmp(s,"quit")==0) break;
	}
	system("pause");
	return 0;
}
