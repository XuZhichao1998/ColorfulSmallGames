#include<iostream>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#define SL Sleep(400) 
using namespace std;
int main()
{
	srand(time(NULL)); 
	int x=0,y;
	cout<<"--------------------------------\n";
	cout<<"�²�����������Ǽ���";
	int i=100;
	line://���� 
	if(i>1000)i=100;
	while(cin>>x&&x>=0)
	{
		while(1)
		{
			y=(int)rand();
			if(y>0&&y<100)break;	
		}
		//cout<<"���ǣ�"<<y<<endl; 
		while(1){
		 	if(x>y)
			{cout<<"���������������Ų£�";
			cin>>x;}
			else if(x<y){
				cout<<"���������С������Ų£�";
				cin>>x; 
			}
			else {
				cout<<"��";SL;cout<<"ϲ";SL;cout<<"��";SL;cout<<"!";SL;cout<<"�¶��ˣ�"; 
				break;
			}
		}
		cout<<"����һ�Σ�";
		cout<<"--------------------------------\n";
		cout<<"�²�����������Ǽ�������-1�˳���:";
		goto line;
	}
	cout<<"��ӭ�´�������\n";
	 
	return 0; 
}
