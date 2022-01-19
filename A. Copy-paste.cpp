#include<iostream>
#include<algorithm>
using namespace std; 
typedef long long ll;
const int na=100000;
int t,n,k;
int a[na];
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=0;i<=n-1;i++){
			cin>>a[i];
		}sort(a,a+n);
		ll cnt=0;
		for(int i=1;i<=n-1;i++){
			if((k-a[i])/a[0]==0){
				break;
			}
			cnt+=(k-a[i])/a[0];
		}
		cout<<cnt<<endl;
	}
	return 0;
}
