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
	cout<<"猜猜我想的数字是几：";
	int i=100;
	line://多余 
	if(i>1000)i=100;
	while(cin>>x&&x>=0)
	{
		while(1)
		{
			y=(int)rand();
			if(y>0&&y<100)break;	
		}
		//cout<<"答案是："<<y<<endl; 
		while(1){
		 	if(x>y)
			{cout<<"比我想的数大，请接着猜：";
			cin>>x;}
			else if(x<y){
				cout<<"比我想的数小，请接着猜：";
				cin>>x; 
			}
			else {
				cout<<"恭";SL;cout<<"喜";SL;cout<<"你";SL;cout<<"!";SL;cout<<"猜对了！"; 
				break;
			}
		}
		cout<<"再玩一次？";
		cout<<"--------------------------------\n";
		cout<<"猜猜我想的数字是几（输入-1退出）:";
		goto line;
	}
	cout<<"欢迎下次再来玩\n";
	 
	return 0; 
}
