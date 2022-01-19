#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int N = 105;
int n,b[N],a[N];
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i+=2){
			cin>>a[i]>>a[i+1];
			b[i]=-a[i+1],b[i+1]=a[i];
		}
		for(int i=1;i<=n;i++){
			cout<<b[i]<<" ";
		}
		cout<<""<<endl;
	}
	return 0;
} 
