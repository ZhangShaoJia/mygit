/*
这个程序的功能是随机产生30个两位数以内的式子，可以有真分数
20133078于磊
*/
#include <iostream>
#include <string>
#include <time.h>//用到了time函数 
#define random(x)(rand()%x)
#define N 30    //产生30个
#define L 5     //控制行在每行5个式子
using namespace std;
void main()
{
	double rand1[N],rand2[N],rand3[N],rand4[N];
	int i,j,k=1;
	string ch[N];
	srand((unsigned) time(NULL)); //用时间做种，每次产生随机数不一样
	for (j=0;j<N;j++)             //先随机产生30种运算
	{
		int i=rand()%4;
		switch(i%4)
		{
		case 0:ch[j]="+";break;
		case 1:ch[j]="-";break;
		case 2:ch[j]="*";break;
		case 3:ch[j]="/";
		}
	}
	cout<<"随机产生的30个算式如下所示：";
	for(i=0;i<N;i++) 
	{
		if(i%3==0)    //每行控制输出3个
			cout<<endl;
		rand1[i]=random(100);    //第一个数的分子
		rand2[i]=random(100);    //第一个数的分母
		rand3[i]=random(100);
		rand4[i]=random(100);
		if(rand1[i]<rand2[i]&&rand3[i]<rand4[i]&&rand2[i]!=0&&rand4[i]!=0&&rand3[i]!=0)      //真分数分母不为零
			cout<<"\t"<<rand1[i]<<"/"<<rand2[i]<<ch[i]<<rand3[i]<<"/"<<rand4[i]<<"=\t";
		else if(ch[i]=="/"&&rand2[i]!=0)             //除法时候分母不能为零
			cout<<"\t"<<rand1[i]<<ch[i]<<rand2[i]<<"=\t";   
		else if(ch[i]=="/"&&rand2[i]==0)             //除法分母为零时，返回重新生成随机数
			i--;
		else
			cout<<"\t"<<rand1[i]<<ch[i]<<rand2[i]<<"=\t";  
	}
	cout<<endl;
}