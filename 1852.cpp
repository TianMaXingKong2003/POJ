#include<iostream>
#include<cmath>
#define maxn 1000000

typedef long my;
using namespace std;

struct put
{
	my a;
	my b;
}put[maxn];

int main()
{
	my n;cin>>n;
	for(my j=0;j<n;j++)
	{
		my lenth,num;cin>>lenth>>num;
		my out[maxn];
		for(my i=0;i<num;i++)	cin>>out[i];
		my big=0,small=0;
		for(my i=0;i<num;i++)	
		{
			small=max(small,min(out[i],lenth-out[i]));
			big=max(big,max(out[i],lenth-out[i]));
		}
		put[j].a=small;
		put[j].b=big;
	}
	for(my i=0;i<n;i++)
	{
		cout<<put[i].a<<" "<<put[i].b;
		if(i!=n-1)	cout<<endl;
	}
}
