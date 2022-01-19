#include <iostream>
#include <algorithm>
#define int long long
using namespace std;
int t,n,l,r,k,a[101];
signed main()
{
cin>>t;
while(t--)
{
  cin>>n>>l>>r>>k;
  for(int i=1;i<=n;i++)cin>>a[i];
  sort(a+1,a+n+1);
  int sum=0,ans=0;
  for(int i=1;i<=n;i++)
  {
    if(a[i]<l)continue;
    if(a[i]>r)break;
    sum+=a[i];
    if(sum<=k)ans++;
    else break;
  }
  cout<<ans<<"\n";
}
return 0;
}
