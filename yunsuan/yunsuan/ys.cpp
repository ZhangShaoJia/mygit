/*
�������Ĺ������������30����λ�����ڵ�ʽ�ӣ������������
20133078����
*/
#include <iostream>
#include <string>
#include <time.h>//�õ���time���� 
#define random(x)(rand()%x)
#define N 30    //����30��
#define L 5     //��������ÿ��5��ʽ��
using namespace std;
void main()
{
	double rand1[N],rand2[N],rand3[N],rand4[N];
	int i,j,k=1;
	string ch[N];
	srand((unsigned) time(NULL)); //��ʱ�����֣�ÿ�β����������һ��
	for (j=0;j<N;j++)             //���������30������
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
	cout<<"���������30����ʽ������ʾ��";
	for(i=0;i<N;i++) 
	{
		if(i%3==0)    //ÿ�п������3��
			cout<<endl;
		rand1[i]=random(100);    //��һ�����ķ���
		rand2[i]=random(100);    //��һ�����ķ�ĸ
		rand3[i]=random(100);
		rand4[i]=random(100);
		if(rand1[i]<rand2[i]&&rand3[i]<rand4[i]&&rand2[i]!=0&&rand4[i]!=0&&rand3[i]!=0)      //�������ĸ��Ϊ��
			cout<<"\t"<<rand1[i]<<"/"<<rand2[i]<<ch[i]<<rand3[i]<<"/"<<rand4[i]<<"=\t";
		else if(ch[i]=="/"&&rand2[i]!=0)             //����ʱ���ĸ����Ϊ��
			cout<<"\t"<<rand1[i]<<ch[i]<<rand2[i]<<"=\t";   
		else if(ch[i]=="/"&&rand2[i]==0)             //������ĸΪ��ʱ�������������������
			i--;
		else
			cout<<"\t"<<rand1[i]<<ch[i]<<rand2[i]<<"=\t";  
	}
	cout<<endl;
}