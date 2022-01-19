#include<iostream>
#include<cstring>
using namespace std;
int s[109];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		memset(s,0,sizeof s);
		int n;
		cin>>n;
		for(int i = 1;i<=n;i++)
		{
			int tmp;
			cin>>tmp;
			if(tmp<0)
			tmp*=-1; 
			s[tmp]++;
		}
		int ans = 0;
		if(s[0])
		ans++;
		for(int i = 1;i<=100;i++)
		{
			if(s[i])
			ans++;
			if(s[i]>1)
			ans++;
		}
		cout<<ans<<endl;
		
	}
	
}
