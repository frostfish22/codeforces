#include<stdio.h>
#include<string.h>
#include<cmath>
#define ll long long//int���2^31-1,����h<=50,����long long
#include<algorithm>
using namespace std;
int main()
{
	ll t,h,p;
	scanf("%lld",&t);
	while(t--)
	{
		ll sum=1,a=0;//��ʼִ�и��ڵ�1����1����
		scanf("%lld%lld",&h,&p);
		for(ll i=1;i<h;i++)
		{
			ll k=pow(2,i)-a;//aΪ��һ���Ѿ�ִ�й��Ľڵ���
			a=0;
			if(k<=p)//��ǰ��һ��ڵ���<=���ִ������һ��ִ�����
			sum++;//����һ����
			else//һ��ִ�в���
			{
				if(k%p!=0)//ִ����������ʣ����нڵ���
				{
					sum++;//��ִ��һ��
					a=p-(k%p);//k%pΪ��ǰ��ʣ��Ľڵ�����p-(k%p)��ʾ������ִ��һ�κ���һ��ִ���˼����ڵ㣬�´���������⼸��ִ�й���
				}
				sum+=k/p;//����ִ�е�������
			}
		}
		printf("%lld\n",sum);
	}
	return 0;
}

