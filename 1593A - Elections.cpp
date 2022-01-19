#include<stdio.h>
#include <string.h>
#include<iostream>
#include<algorithm>
using namespace std;
 
int a[105];
int main()
{
	int z,j,n,m,max,ind,i;
	scanf("%d %d",&n,&m);
	for(i=0;i<m;i++)
	{
		max=-999;
		for(j=1;j<=n;j++)
		{
			scanf("%d",&z);
			if(z>max)
			{
				max=z;
				ind=j;
			}
		}
		a[ind]++;	
	}
	max=-999;
	for(i=1;i<=n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
			ind=i;
		}
	}
	printf("%d\n",ind);
	return 0;
}
