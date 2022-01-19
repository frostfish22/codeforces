#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while (t--)
	{
		ll n;
		scanf("%lld",&n);
		if (n==1)
			printf("0 1\n");
		else
			printf("%lld %lld\n",1-n,n);
	}
	return 0;
}

