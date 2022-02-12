#include<stdio.h>
#include<string.h>
#include<cmath>
#define ll long long//int最大到2^31-1,题中h<=50,故用long long
#include<algorithm>
using namespace std;
int main()
{
	ll t,h,p;
	scanf("%lld",&t);
	while(t--)
	{
		ll sum=1,a=0;//初始执行根节点1花费1分钟
		scanf("%lld%lld",&h,&p);
		for(ll i=1;i<h;i++)
		{
			ll k=pow(2,i)-a;//a为这一层已经执行过的节点数
			a=0;
			if(k<=p)//当前这一层节点数<=最大执行数，一次执行完毕
			sum++;//花费一分钟
			else//一次执行不完
			{
				if(k%p!=0)//执行最大次数后剩余的有节点数
				{
					sum++;//再执行一次
					a=p-(k%p);//k%p为当前层剩余的节点数，p-(k%p)表示上述再执行一次后，下一层执行了几个节点，下次运算减掉这几个执行过的
				}
				sum+=k/p;//加上执行的最大次数
			}
		}
		printf("%lld\n",sum);
	}
	return 0;
}

