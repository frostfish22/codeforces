#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
int t,n,h;
int ans;
int main(){
	cin.tie(0),ios::sync_with_stdio(false);
	cin>>t;
	while(t--){
		cin>>n>>h;
		vector<int> a(n); //也可以等价位vector<int> a(n,0)
		for(int i=0;i<n;i++){
			cin>>a[i];
		} 
		sort(a.begin(),a.end());
		//这是一个排序算法，STL里面自带的，在algorithm中
		//for(auto i:a){
		//	cout<<i<<endl;} 
		
		int x = a[n-2],y=a[n-1];
		int tmp = h%(x+y);
		if(tmp==0){
			ans=h/(x+y)*2;
		}else if(tmp<=y){
			ans = h/(x+y)*2+1;
		}else{
			ans = h/(x+y)*2+2;
		}
		cout<<ans<<endl;
	}
	return 0;
}
